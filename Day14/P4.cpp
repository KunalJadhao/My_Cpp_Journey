/*MultiThreading: 
it is a feaeture that allows a program to run multiple parts of code (called threads)
atthe same time. it improves performance by doing multiple tasks simultaenously
In C++ multithreading is suppoerted using the <thread> header, intriduced in C++11
Each thread can run a seperate function. This is useful for the tassks like downloading files, processing data,
or running animation without stopping the main program*/\

//Basic Single Thread example

#include <iostream>
#include <thread>

using namespace std;

void sayHello() {
    cout << "Hello from thread!" << endl;
}

int main() {
    // Creating a thread that runs the sayHello() function
    thread t1(sayHello);  // Fixed typo: saHello → sayHello

    // Wait for the thread to finish
    t1.join();

    cout << "Main thread finished." << endl;  // Fixed typo: cou → cout

    return 0;
}
