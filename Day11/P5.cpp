/*
Advaced Usecase:
Scoped Enumerations (enum class):

C++11 introduced scopeed enumeration, which provide better type saftey and avoid name clashes.

Syntax:

enum class EnumName{

       Values1;
       Values2;
 
 };
 */

 #include<iostream>
 using namespace std;

 enum class Direction{
    NORTH,
    SOUTH,
    EAST,
    WEST
 };

 int main(){
    Direction dir = Direction::EAST;

    if (dir == Direction::EAST)
    {
        cout<<"Heading East!" <<endl;
    }
    return 0;
 }

 /*
 Structues: used to group differen types of data together.
 Enumeration: used to define a variable that can take one of a limited set of values.
 Scoped Enumeration: Provide better type saftey and avoid naming conflicts.*/
