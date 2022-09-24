#include <iostream>

using namespace std;

// Parameters: 
//  - are located inside the paretnhesis of the name of function
//  - behave like variables - it only exists inside the function
// Technically, you are defining and making the prototype (DEFINE)
int product(int a, int b) {
    return a * b;
}
// Void-type function does not have return codes
void message() {
    cout << "Welcome to the Black Parade!" << endl;
    cout << "I love computers!" << endl;
    cout << "This is from a void-type function!" << endl;
}

// Return-type of float
float difference(float a, float b) {
    return a - b;
}
void showDifference() {
    float a;  // Used for Data Input
    float b;  // Used for Data Input
    //Make a prompt for variable a 
    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter b value for b: ";
    cin >> b;
    
    //Show the result of a - b (using function call for difference)

    cout << difference(a, b) << endl;
}

int main() {
    cout << "The product of 3 and 4 is " << product(3, 4) << endl;
    // Void type fucntion call
    message();
    message();
    showDifference();
    // Return-type when? Results-driven
    // Void-type when? Procedural
    return 0;   //Terminator
}


