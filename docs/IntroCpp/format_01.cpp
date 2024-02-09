#include <format>
#include <iostream>

int main() {
int num = 42;
std::string name = "John";
std::string formatted_str = std::format("My name is {} and my favorite number is {}", name, num);
std::cout << formatted_str << std::endl;
return 0;
}
