//Do while loop

#include<iostream>

using namespace std;

int main(){

    int choice;
    do{
        cout<<"Menu:\n";
        cout<<"1. Maggie\n";
        cout<<"2. Soap\n";
        cout<<"3. Shampoo\n";
        cout<<"4. Stationary\n";
        cout<<"5. Biscuits\n";
        cout<<"6. Toothpaste\n";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"You  Selected 1.Maggie " <<endl;
            break;
        case 2:
        cout<<"You Selected 2. Soap " <<endl;
        break;
        case 3:
        cout<<"You Selected 3. Shampoo " <<endl;
        break;
        case 4:
        cout<<"You Selected 4. Stationary " <<endl;
        break;
        case 5:
        cout<<"You Selected 5. Biscuits " <<endl;
        break;
        case 6:
        cout<<"You Selected 6. Toothpaste " <<endl;
        break;
        case 7:
        cout<<"Exit" <<endl;
        default: cout<<"Ivalidd Choice ! Please Try again" <<endl;
            break;
        }
    } while (choice !=6); //Continue until the user choose to exit
    return 0;
    
}