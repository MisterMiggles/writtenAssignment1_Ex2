//
//  main.cpp
//  writtenAssignment1_Ex2
//  Objective - Identify the number entered by the user and print out the number in its word format.
//  Created by Mike Marques on 3/19/22.
//
#include <iostream>
using namespace std;

string setString(int x); // Function prototype.

int main()
{
    int input;// Value entered by user.

    cout << "Enter a number in the range 1-5: ";// Prompt user to enter a number between designated range
    cin >> input;// Receive user's entered number and store into input.
    cout << setString(input) << endl;// Call setString function and print out result.
}

// setString function passes the user's entry (input) and returns a response (answer).
string setString(int x)
{
    string answer;// String variable that will store our response.
    
    if (x == 1)// If...Else statements that compares user's input to 6 different possibilties.
    {
        answer = "\nYou entered the number one.\n";
    }
    else if (x == 2)
    {
        answer = "\nYou entered the number two.\n";
    }
    else if (x == 3)
    {
        answer = "\nYou entered the number three.\n";
    }
    else if (x == 4)
    {
        answer = "\nYou entered the number four.\n";
    }
    else if (x == 5)
    {
        answer = "\nYou entered the number five.\n";
    }
    else// If input doesn't match previous statements, tell user entry is invalid.
    {
        answer = "\nInvalid entry. Please try again.\n";
    }
    return answer;// Returns string based on input's matching statement.
}
