#include <cstdint>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void rgb_to_uint32(uint8_t rgb[], uint32_t& color);
void uint32_to_rgb(uint8_t rgb[], uint32_t& color);
map<string, uint32_t> find_map;
int main() {
  map<string, uint32_t> color_list;
  string colors[] = {"red", "green", "blue", "yellow", "cyan"};
  uint8_t rgbs[][3] = {{255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 0}, {0, 255, 255}};

  uint32_t color= 0;
  int size = sizeof(rgbs) / sizeof(rgbs[0]);
  for (int i = 0; i < size; ++i) {
    rgb_to_uint32( rgbs[i], color);
    color_list.insert({colors[i], color});
  }
  for (auto it: color_list) {
    cout << "Color: " << it.first << ", Code: 0x" << hex << it.second << endl;
  }
  cout << "--------------------------------" << endl;
  string search_color;
  cout << "Enter color name to search: ";
  cin >> search_color;
  auto found_color = find_if(color_list.begin(), color_list.end(), 
    [search_color](const auto& p) { return p.first == search_color; });
  if (found_color != color_list.end()) {
    cout << "Found color in color list: " << found_color->first << endl;
    uint8_t rgb[3];
    color = found_color->second;
    uint32_to_rgb(rgb, color);
    cout << dec << "Value: R(" << (int)rgb[0] << "), G(" 
    << (int)rgb[1] << "), B(" << (int)rgb[2] << ")" << endl;
  }
  else {
    cout << "Color not found" << endl;
  }
  return 0;
}
void rgb_to_uint32(uint8_t rgb[], uint32_t& color) {
  color = (rgb[0] << 16) | (rgb[1] << 8) | rgb[2];
}
void uint32_to_rgb(uint8_t rgb[], uint32_t& color) {
  rgb[0] = (color >> 16) & 0xFF;
  rgb[1] = (color >> 8) & 0xFF;
  rgb[2] = color & 0xFF;
}