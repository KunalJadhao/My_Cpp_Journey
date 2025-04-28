/*Object Orineted Programming: 
OOp is a way of wrtiting a computer program using objects.
an object is a combination of data and functions that work together.

INsted if writing a code line by line in OOP you create objects based in the real world 
scenario ex - Laptop, car Bank account, UMS etc

Real life Example : Car

We have a car as an object:

A car is a object

data(Properties): Color, Model, Company, Price

Action(task to be preforming): startengine(), stopengine(), applybrake()

Key concept of OOP: 
1. Class: A class is a ablue print or a template that defines the Properties (attributse and actions (methods) of an object. Example -Animal

2. Object: An instance of a class. It represensts a specific entiry with properties and behaviour defined by its class. Example- Dog (Properties -Color, bread & behaviour -bark(), eating() )

3. Encapsulation: the bundling od data and methods that operates on the data into a single unit or class it, restricts access to some of the ibjects components, which is a means of preventing unintented interference and misuse

4. Inheritence: A concept where a new class can inherit properties and behaviour from an exiting class(base class). This Promotes code reusability

5. Polymorphism: The ability of different classes to be treated as instacnes fo teh same class through a common
interface. It allows methods to do different things based on the ibjec it is acting upon.

6. Abstraction: The concept of hiding complex imnplementation details and showing
only the essential features of the obejcts. It helps in reducing programming complexity.

Real life Example

Class : Car

Attributes: color, model, year, speed
methods: acceleration(), brake(), displayinfo()
object: mycar

color: "Red"
model: "Toyota"
year: 2020
speed: 0
*/
#include<iostream>
#include<string>
using namespace std;

//class defincation
class Car{
    public: 

    //Attributes
    string color;
    string model;
    int year;
    int speed;

    //Constructor

    Car(string c, string m, int y){
        color = c;
        model = m;
        year = y;
        speed = 0; //Initial speed
    }

    //Method to accelerate
    void accelerate(){
        speed +=10;
        cout<<" Accelerating :  Cuurent speed: " <<speed <<"km/h"<< endl;

    }
    //Method to brake
    void brake(){
        speed -=10;
        if(speed<0) speed =0;// prevent negative speed
        cout<<" Braking current speed: " <<speed <<"km/h" <<endl;

    }

    //Method to display car information
    void displayinfo(){
        cout<<" car model: " <<model << ", Color: " <<color <<", Year" << year <<", Speed: " <<speed <<"km/h" <<endl;

    }
};
int main(){
    // crating an object of car
    Car mycar("Red", "Toyota",  2020);

    //using methods
    mycar.displayinfo();
    mycar.accelerate();
    mycar.brake();
    mycar.displayinfo();

    return 0;
}


