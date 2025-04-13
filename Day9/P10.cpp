//10. pointer and struct

#include<iostream>
using namespace std;

struct point
{
    int x;
    int y;

};

int main(){
    point p= {10,20};
    point* ptr  = &p; //Pointer to struct

    cout<<"Point cordinates: ("<<ptr->x <<", "<<ptr->y<<")" <<endl; //Accesing the struct
    return 0;
    
}
