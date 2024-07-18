//This is a comment, not a code! (Single-line comment)
/* <- opening comment
    This
    is
    a
    multi
    line 
    comment
closing comment -> */

#include <iostream>     // useful for cin and cout
#include <iomanip>      // Input Output MANIPulation                                                                            

using namespace std;    // Standard scope

int main() {
    // Variables:
    // - are storages that can hold a PIECE of information
    // informations such as numbers, and texts
    // Formula #1: *type of variable* *name of variable* = information;"
    // Formula #2: *type of variable* *name of variable;*
    //  Type = Data Types (int, float, double, char, string)
    int  whole = 8;     //int can only take whole numbers!
    float point = 8.2;  //float can take both whole and decimal numbers!
    char letter = 'a';  //char can only take a letter, a number, or a punctuation only!
    string word = "keyboard";   //string can take a string of letters!
    string Word = "mouse";

    cout << Word << endl;
    
    cout << word << endl;

    //  Naming conventions for Variables: Camel Casing, Pascal Casing, and Snake Casing
    //  Example: head count students
    //  Camel Casing: headCountStudents
    //  Pascal Casing: HeadCountStudents
    //  Snake Casing: head_count_students

    //  Operators: Arithemtic, Relation/Comparison, Logical, Assignment

    //  Arithmetic: +, -, *, /, % and many more
    //  Relation/Comparison: ==, >, <, >=, <=, !=
    //  Logical: ! (not), || (or), && (and)
    //  Assignment: =, ++, --

    cout << 2 + 3 << endl;
    cout << (3 == 2) << endl;
    cout << !true << endl;

    //  Data Input
    //  - programming concept which gather an information from the user
    //  Step 1: Make sure that the variable to be used is already made
    //  Optional Step: Make a prompt (asking the user and making the user answer)
    //  Step 2: Use cin >> *name of the variable*

    //Step 1: Make a variable
    string nickname;
    
    //Optional Step: Make a prompt
    cout << "Enter your nickname ";

    //Step 2: Use cin code
    cin >> nickname;    //will asign the user's information to the nickname variable

    //Display the value of nickname variable
    cout << "Your nickname is " << nickname << endl;

    int a;
    int b;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "a + b = " << a+b << endl;

    //  Numeric Manipulation
    //  - is all about changing the accuracy of the output
    //  Example:3.14159 -> 3.14 (how?)
    //  Step 1: #include <iomanip>
    //  Step 2: cout << fixed << setprecision(*number of decimal place*);
    //  Step 3: cout << *variable or number to display* << endl;

    cout << fixed << setprecision(2);
    cout << "the value of pi in 2 decimal places is "<< 3.14159 << endl;

    //  Example: 2.72 -> 2.7200

    cout << fixed << setprecision(4);
    cout << "2.72 in four decimal places is " << 2.72 << endl;

    float price = 99;

    cout << setprecision(5) << "The price is " << price << " php" << endl; 

    return 0;   // Exit the program
}

