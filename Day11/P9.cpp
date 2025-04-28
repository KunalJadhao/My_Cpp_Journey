//Parameterized Constructor

class Myclass{
    public:
    int value;

    Myclass(int v); // parameterized contructor
    value =v;
    cout<<" Parameterized constructor called with value: "<<value<<endl;

};

int main(){
    Myclass obj(10); //Calls the parameterized constructor
    return 0; 
}