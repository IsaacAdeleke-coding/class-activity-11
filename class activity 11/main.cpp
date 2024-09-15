//
//  main.cpp
//  class activity 11
//
//  Created by Isaac Adeleke on 9/15/24.
//

#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the two values
    int value1, value2, largerValue;

    // Ask the user to enter two values
    cout << "Enter the first value: ";
    cin >> value1;

    cout << "Enter the second value: ";
    cin >> value2;

    // Compare the two values and store the larger one in a separate variable
    if (value1 > value2) {
        largerValue = value1;
    } else {
        largerValue = value2;
    }

    // Print the larger value
    cout << "The larger value is: " << largerValue << endl;

    return 0;
}

/*
 Enter the first value: 100
 Enter the second value: 50
 The larger value is: 100
 Program ended with exit code: 0
 */
