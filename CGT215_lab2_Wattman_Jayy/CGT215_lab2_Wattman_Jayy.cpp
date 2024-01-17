// CGT215_lab2_Wattman_Jayy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; // allows you to use input and output functions cin and cout without needing to make em like std::cin or std:cout everytime

int main()
{
    float A; //declares float type variable A, where float means that it can hold decimal numbers
    float B; //same logic applies here as the previous line
    float x;

    cout << "Hi, My name is Jayy and I'm going to solve the equation: " << endl; //endl acts like pressing the enter button, it ends the line
    cout << "Ax + B = 0" << endl;
    cout << "For x" << endl;
    cout << endl; //this is how to make a line break

    cout << "Please submit a value for A: ";
    cin >> A; //this asks for the user to input a value for variable A, which we established is a float type variable in line 10


    cout << "Please submit a value for B: ";
    cin >> B;
    cout << endl;

    cout << "Solving Ax+B=0 for x..." << endl;
    cout << endl;

    cout << "The answer is:" << endl;

    x = -B / A; //variable you're solving for has to be first, that means you still have to do the algebra to get the equation simplified
    cout << "x=" << x << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
