/*
The static Keyword in C++ can be used in servral contexts, including static data members, static member
functions, and static local variables

Static Data Members:alignas
1. Static data members belong to the class rather than any specific object. They are shared among all
instances of the class
2. They can be accesses using the class name of through an object
*/

#include <iostream>
class Myclass
{
public:
    static int count; // Declaration of static number

    Myclass()
    {
        count++; // Increament count for each object created
    }
};

// Defination of static member outside the class
int Myclass::count = 0;

int main()
{
    Myclass obj1;
    Myclass obj2;
    std::cout << "Number of Ojects created: " << Myclass::count << std::endl; // Output: 2
    return 0;
}