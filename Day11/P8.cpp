/* Constructor -->

In C++ a constructor is a special member function that is automatically called when an object of a class 
is created. Constructors are sued to intilize the object 's data members are allocate
resourses if necessary. They have the same name as the class and do not have a return type.

Syntax:
class Classname{
public:

  Classname(); // Default constructor
  Classname(const Classname &obj); //Copy constructor
};
*/

/*
Key feature of constructors -->
Same name as class: The constructor must have the same name as the class.
No reutrn type: Constructors don not have a return type, not even void.
Automaticd Invocation: Contructors are called automatically when an ibject is created.
Overloading: You can have multiple constructor in a class with different parameters( constructor overloading).
Types of Constructor -->

1. Default Constructor: A constructor that takes no parameter or has defaultvaleus for all its parameters.
2. Parameterized Constructor: A constructor that takes parameters to initialize an object with specific values.
*/

class MyClass{
    public:
    MyClass(){
        cout<<"Default Constructor called!"<<endl;

    }
};
int main(){
    MyClass obj; //calls the constructor
    return 0;
}