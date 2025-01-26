#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // Task #1, #3, & #4
    std::vector<int> numbers = {1,2,3,4,5};
    std::cout << "Numbers: ";
    displayList(numbers);
    std::vector<double> decimals = {3.14, 6.28, 9.42, 12.57, 15.71};
    std::cout << "Decimals: ";
    decimals.pop_back();
    displayList(decimals);
    std::vector<std::string> rickroll = {"Never", "Gonna", "Give", "You", "Up"};
    std::cout << "Strings: ";
    rickroll.push_back("Linh");
    displayList(rickroll);

// Task #2
    std::cout << numbers[0] << ", ";
    std::cout << numbers[2] << ", ";
    std::cout << numbers[4] << " " << std::endl;

    // Task #4
    
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}