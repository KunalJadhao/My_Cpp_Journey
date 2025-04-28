// Smartphone Class

#include<iostream>
using namespace std;

class Smartphone{
    private:
    string brand;
    string model;
    string price;


    public:
          Smartphone(string b, string m, double p){
            brand = b;
            model = m;
            price = p;
          }

          void displayinfo(){
            cout<<"Brand: " <<brand<<endl;
            cout<<"Model: " <<model <<endl;
            cout<<"Price: " <<price <<endl;
          }
};

int main(){
    Smartphone phone("Apple", "iphone16", 150000);
    phone.displayinfo();
    return 0;
}