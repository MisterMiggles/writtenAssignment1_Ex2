//
//  main.cpp
//  writtenAssignment1_Ex1
//  Objective - A program that determines the largest number based on numbers enterd by the user one at a time.
//  Created by Mike Marques on 3/17/22.
//
#include <iostream>
using namespace std;

double larger(double x, double y);// Function prototype.

int main()
{
    double inputNum{0.0};// Value entered by user; initialized.
    double maxNum;// Max number derived from enteries by user.
    int const loops{15};// Number of iterations that will occur.
    
    cout << "Enter 15 numbers.\n";// Prompt user to enter 15 numbers.
    maxNum = larger(inputNum, loops);// Initialize maxNum variable by calling larger function.
    cout << "The largest number is " << maxNum << ".\n";// Print maxNum's value.
}
// larger function takes user's entries (x), stores into variable num, and compares variables max and num in a for loop. If num is greater than max, then num's value becomes max's value.
double larger(double x, double y)
{
    double max{0.0};// Double variable storing max number.
    double num{x};// Double variable storing user's entries.
    
    for (int counter{1}; counter <= y; counter++)// Counter initialized at 1. Increment by 1 after each iteration until 15 iterations have occurred.
    {
        cin >> num;// Receive input for the entered number and store into num.
        if (max < num)// Compare variable num to variable max. If num is greater than max, store num's value into max.
        {
            max = num;// max variable takes on num's value.
        }
    }
    return max;// After for loop completes, variable max's value is returned.
}
