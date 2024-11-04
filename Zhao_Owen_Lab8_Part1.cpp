//Owen Zhao
//Lab #8: Functions
//11/04/24

#include <iostream>
#include <cmath>

using namespace std;

//Making function for part 2
int doubleMultiply(int a, int b) {
    int product;
    product = a * b * 2;
    return product;
}

int main() {
    //Part 1
    //Making variables
    double number;

    //Getting floating point number from user
    cout << "Enter a floating point number: ";
    cin >> number;

    //Printing out the square root, 4th power, and floor of user input
    cout << "The square root of " << number << " is: " << sqrt(number) << endl;
    cout << number << " to the power of 4 is: " << pow(number, 4) << endl;
    cout << "The floor of " << number << " is: " << floor(number) << endl;

    //Part 2
    /*
    In part 2 the code given is making the user give two integer values and the function doubleMultiply is getting twice the value of the product of the two numbers.
    */
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: "
        << doubleMultiply(num1, num2) << endl;
    
    system("PAUSE");

    //Part 3
    //Making variables
    double dub1, dub2, dub3;

    //Asking user for three floating point numbers
    cout << "Enter three floating point numbers: ";
    cin >> dub1 >> dub2 >> dub3;

    //Printing the result using the function getSum
    cout << "The sum of the three floating point numbers is: "
        << getSum(dub1, dub2, dub3) << endl;

    return 0;
}

//Making function for part 3 that takes in three floating point values and adds them together
double getSum(double a2, double b2, double c2) {
    double result;
    result = a2 + b2 + c2;
    return result;
}

/*
Output:
Enter a floating point number: 2.5
The square root of 2.5 is: 1.58114
2.5 to the power of 4 is: 39.0625
The floor of 2.5 is: 2
Enter two integers: 2 4
Twice the product of the numbers is: 16
Press any key to continue . . . 
Enter three floating point numbers: 3.5 6.5 4.5
The sum of the three floating point numbers is: 14.5
*/