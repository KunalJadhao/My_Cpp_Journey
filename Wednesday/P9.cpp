// Paratemerized Constructor
#include <iostream>

class myclass
{
public:
    int value;

    myclass(int n)
    { // parameterized constructor
        value = n;
        std::cout << "Paramaterized Constructor called with value: ";
    }
};

int main()
{
    myclass obj(10); // calls the parameterized constructor
    return 0;
}