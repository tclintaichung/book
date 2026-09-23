#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> my_map = {
        {"book", 10},
        {"milk", 5}
    };

    std::cout << my_map.at("book") << std::endl;
    std::cout << my_map.at("milk") << std::endl;

    return 0;
}