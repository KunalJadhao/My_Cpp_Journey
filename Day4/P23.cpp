// 5. Basic Calculator

#include <iostream>
using namespace std;

int main()
{
    char operation;
    double num1, num2;

    do
    {
        cout << "Enter an operator (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q')
        {
            break; // Exit the loop if the user wants to quit
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation)
        {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
            {
                cout << "Result: " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator! Please try again." << endl;
            break;
        }
    } while (true); // Continue until the user chooses to quit

    std::cout << "Thank you for using the calculator!" << endl;
    return 0;
}