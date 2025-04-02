// 2. Using <cstdlib> for random number Generation

#include <iostream>
#include <cstdlib> //for rand() and srand()
#include <ctime>   //for time()
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed for the random number genration
    int randomnum = rand() % 100;              // Random number between 0 and 99
    cout << " Random Number: " << randomnum << endl;
    return 0;
}