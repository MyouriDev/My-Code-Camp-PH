#include <iostream>
// Essentials for rng
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Variables
    char response;      // Gets the player's response to rematch or not
    // Random number refresher
    srand(time(NULL));

    // Welcome and guide the player to the game
    cout << "Welcome to the Race to 100 game!" << endl;
    cout << "2 dice are rolled every round." << endl;
    cout << "The points given every round are random so, goodluck!" << endl;

    // Make a rematch feature
     do
     {
        int d1;     //Number of dots in die 1
        int d2;     //Number of dots in die 2
        int player = 0;     // Player's points
        int cpu = 0;        // Cpu's points
        int round = 1;      // Tracer for the loop
              // Use do-while loopl: "do first-compare" basis
          do
          {
                //  Generate a divider
                cout << "------------------------" << endl;
                //  Show the round number
                cout << "Round number: " << round << endl;
                cout << "------------------------" << endl;
                //  Get random numbers for d1 and d2 variables for player 
                d1 = rand() % 6 + 1;
                d2 = rand() % 6 + 1;
                player += (d1 + d2);
                //  Get random numbers for d1 and d2 variables for cpu
                d1 = rand() % 6 + 1;
                d2 = rand() % 6 + 1;
                cpu += (d1 + d2);
                //  Display the current Player and CPU points
                cout << "Player's score: " << player << endl;
                cout << "CPU score: " << cpu << endl; 
                // Adding the round number by 1
                round++;
                // Press enter to procceed to the next round or decide the winner
                cout << "Press ENTER to continue" << endl;
                cin.get();                                            
            } while (player < 100 && cpu < 100);

            //  Who is the winner?

            if (player > cpu) cout << "Player wins!" << endl;
            else if (cpu > player) cout << "CPU wins!" << endl;
            else cout << "It'a TIE!" << endl;

            // Make a prompt to let the user issue a rematch
            cout << "Press y to rematch ";
            cin >> response;
            } while (response == 'y');
            


    return 0;
}