#include <iostream>
#include <map>

class MyMap {
    private:
        std::map<std::string, int> my_map;
    public: 
        MyMap() {
            my_map = {
                {"book", 10},
                {"milk", 5}
            };
        }
    int getValue(const std::string& key) const {
        return my_map.at(key);
    }
    void setValue(const std::string& key, int value) {
        my_map[key] = value;
    }
    void hello() const {
        std::cout << "Hello from MyMap!" << std::endl;
    }
};
int main() {
    MyMap my_map;
    my_map.hello();
    std::cout << my_map.getValue("book") << std::endl;
    std::cout << my_map.getValue("milk") << std::endl;
    return 0;
}