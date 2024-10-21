# Class Activity 11: Find the Larger Value

This C++ program prompts the user to enter two integer values and determines which one is larger. It then prints the larger value.

## Program Overview

1. The user is prompted to input two integer values.
2. The program compares the two values and stores the larger one in a variable.
3. The larger value is then printed to the console.

### Code Snippet

```cpp
#include <iostream>
using namespace std;

int main() {
    int value1, value2, largerValue;

    cout << "Enter the first value: ";
    cin >> value1;

    cout << "Enter the second value: ";
    cin >> value2;

    if (value1 > value2) {
        largerValue = value1;
    } else {
        largerValue = value2;
    }

    cout << "The larger value is: " << largerValue << endl;

    return 0;
}
Example Input/Output
Example:

Enter the first value: 100
Enter the second value: 50
The larger value is: 100
How to Compile and Run

To compile the program, use the following command:
g++ main.cpp -o LargerValue
To run the compiled program, use:

./LargerValue

Here's a concise README.md for your "Class Activity 11" project:

markdown
Copy code
# Class Activity 11: Find the Larger Value

This C++ program prompts the user to enter two integer values and determines which one is larger. It then prints the larger value.

## Program Overview

1. The user is prompted to input two integer values.
2. The program compares the two values and stores the larger one in a variable.
3. The larger value is then printed to the console.

### Code Snippet

```cpp
#include <iostream>
using namespace std;

int main() {
    int value1, value2, largerValue;

    cout << "Enter the first value: ";
    cin >> value1;

    cout << "Enter the second value: ";
    cin >> value2;

    if (value1 > value2) {
        largerValue = value1;
    } else {
        largerValue = value2;
    }

    cout << "The larger value is: " << largerValue << endl;

    return 0;
}
Example Input/Output
Example:

yaml
Copy code
Enter the first value: 100
Enter the second value: 50
The larger value is: 100
How to Compile and Run

To compile the program, use the following command:

bash
Copy code
g++ main.cpp -o LargerValue
To run the compiled program, use:

bash
Copy code
./LargerValue
Features

Prompts the user to input two integer values.
Compares the two values and identifies the larger one.
Prints the larger value.
