// coding calculation program using Myfunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Myfunction(string name, string surname) {

}

double Addnum(double num1, double num2) {

    return num1 + num2;
}
double Divnum(double num2, double num1) {

    return num2 / num1;
}
double Multinum(double num1, double num2) {

    return num1 * num2;
}
double Subnum(double num1, double num2) {

    return num1 - num2;
}
int main()
{
    double num1, num2;
    string name, surname;
    int Operator;
    int result;

    Myfunction;
    cout << "Display your name and surname " << endl;
    cin >> name >> surname;
    cout << " your name is " << name << "and your surname is" << surname << endl;
    cout << "Enter any two numbers " << endl;
    cin >> num1 >> num2;

    cout << " Choose operator" << endl;

    cout << " 1: Addnum " << endl;
    cout << " 1: Divnum " << endl;
    cout << " 1: Multinum " << endl;
    cout << " 1: Subnum " << endl;

    switch (Operator) {
         case 1:
             result == num1 + num2;
                 cout << "the result is " << num1 + num2 << endl;
                   break;

         case 2: 
             result == num1 / num2;
                 cout << "the result is " << num1 / num2 << endl;
                   
                 if (num2 == 0) {
                     cout << "Invalid reguest please enter valid operator " << endl;
                         cin >> num2;

                     result == num2 / num1;
                          cout << "the result is " << num2 / num1 << endl;

                 }
                 else {

                     result == num2 / num1;
                         cout << "the result is " << num2 / num1 << endl;
                           break;
                 }
         case 3:
             result == num1 * num2;
                 cout << "the result is " << num1 * num2 << endl;
                   break;

         case 4:
             result == num1 - num2;
                 cout << "the result is " << num1 - num2 << endl;
                   break;
         default:
             cout << " enter the given operator " << endl;
    }

    return 0;
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
