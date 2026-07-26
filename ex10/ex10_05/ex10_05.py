def main():
  color_array = []
  colors = ["red", "green", "blue", "yellow", "cyan"]
  rgbs = [[255, 0, 0], [0, 255, 0], [0, 0, 255], [255, 255, 0], [0, 255, 255]]
  color = 0x000000

  for i, val in enumerate(rgbs): 
    color = rgb_to_uint32(val)
    color_array.append({"color": colors[i], "code": color})
    print("Color: " + colors[i] + ", Code: " + str(hex(color)))
  print("-------------------------------")
  search_color = input("Enter color name to search: ")
  if search_color == "":
    print("No color name provided.")
    return
  for item in color_array:
    if item["color"] == search_color.strip():
      print("Found color in color array: " + item["color"])
      color = item["code"]
      rgb = [0, 0, 0]
      uint32_to_rgb(rgb, color)
      print("Value: R(" + str(rgb[0]) + "), G(" + str(rgb[1]) + "), B(" + str(rgb[2]) + ")")
      break 
  return 0    

def rgb_to_uint32(rgb):
  color = (rgb[0] << 16) | (rgb[1] << 8) | rgb[2]
  return color

def uint32_to_rgb(rgb, color):
  rgb[0] = (color >> 16) & 0xFF
  rgb[1] = (color >> 8) & 0xFF
  rgb[2] = color & 0xFF

if __name__ == "__main__":
  main()