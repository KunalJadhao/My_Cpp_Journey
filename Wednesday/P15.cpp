#include <iostream>

class MyClass
{
private:
    int value;

public:
    MyClass(int value)
    {
        this->value = value;
    }

    void display()
    {
        std::cout << "Value: " << this->value << std::endl;
    }

    MyClass &setValue(int value)
    {
        this->value = value;
        return *this;
    }
};

int main()
{
    MyClass obj(10);
    obj.display();              // Output: Value: 10
    obj.setValue(20).display(); // Output: Value: 20
    return 0;
}
