#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    int x = 5;
    double y = 3.14;
    std::string name = "Mr. Vu";
    std::cout << name << std::endl;
    std::vector<int> jennys = {8, 6, 7, 5, 3, 0, 9};
    displayList(jennys);
    jennys.pop_back();
    std::vector<double> foo = {3.14, 2.5};
    displayList(foo);
    std::vector<std::string> bar = {"Hello", "Darkness", "My", "Old", "Friend", };
    displayList(bar);
    bar.push_back("Linh");
    
    
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