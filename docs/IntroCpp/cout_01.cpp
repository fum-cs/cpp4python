#include <format>
#include <iostream>
using namespace std;
int main()
{
    int num = 42;
    string name = "Mohammad";
    cout << format("My name is {} and my favorite number is {}", name, num);
    return 0;
}
