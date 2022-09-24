// This program will give us a grade depening on the score
// Score -> Grade Letter

#include <iostream>

using namespace std;

int main () {
    int grade;

    cout << "Enter grade: ";
    cin >> grade;

    // Nested if, for the grade letter
    // If the grade is between 90 to 100
    
    if (grade >= 90 && grade <= 100) cout << "A" << endl;
    else if (grade >= 80 && grade <= 89) cout << "B" << endl;
    else if (grade >= 70 && grade <=  79) cout << "C" << endl;
    else if (grade >= 60 && grade <= 69) cout << "D" << endl;
    else if (grade >= 50 && grade <= 59) cout << "E" << endl;
    else if (grade >= 0 && grade <= 49) cout << "F" << endl;
    else cout << "Inavlid Grade!" << endl;
}