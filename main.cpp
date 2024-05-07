/* Carrie Bailey
 * CS 221 Spring 2024
 *Week 4, Exercise #5
 * Description: 2 computer players have health points and power level. Each gets a random
 * number between 0 and their power level. Winner has points subtracted from health points.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int RAND_MIN = 0;

// struct template
struct Player {
    string name;
    int health;
    int power;
};

//FUNCTION PROTOTYPES
void battle(Player *player_1, Player *player_2); //primary function - the battle of 2 players
int random(int low, int high); //generate random number
void dash(); //generate dashed line for display purposes

//MAIN PROGRAM
int main() {
    Player player_1, player_2; //establish instances of struct Player
    //player 1 information
    player_1.name = "Carrie";
    player_1.health = 10;
    player_1.power = 5;
//player 2 information
    player_2.name = "C++";
    player_2.health = 10;
    player_2.power = 5;
//call battle function
    battle(&player_1, &player_2);

    return 0;
}
//FUNCTION DEFINITIONS
//battle function
void battle(Player *player_1, Player *player_2) {
    //variables to hold each players battle score
    int p1_attack;
    int p2_attack;

    //print game title and each player's health
    cout << "Computer Programming Battle: " << player_1->name << " (HP " << player_1->health << ") vs. "
         << player_2->name << " (HP " << player_2->health << ")" << endl;

    //display dashed line
    dash();
    // Generate 2 random numbers, 1 for each player's battle score
    srand((unsigned) time(nullptr));//seed random numbers

    //random numbers must be between 0 and each player's power level
    p1_attack = random(RAND_MIN, player_1->power);
    p2_attack = random(RAND_MIN, player_2->power);

    //display attack points
    cout << player_1->name << "'s Attack: " << p1_attack << endl;
    cout << player_2->name << "'s Attack: " << p2_attack << endl;
    //display dashed line
    dash();

    //player 1 wins battle
    if (p1_attack > p2_attack) {
        cout << "Total Damage: " << p1_attack - p2_attack << endl;
        dash();
        player_2->health -= (p1_attack - p2_attack);
        cout << "Great job " << player_1->name << " you win for once!" << endl<<endl;

        //player 2 wins the battle
    } else if (p2_attack > p1_attack) {
        cout << "Total Damage: " << p2_attack - p1_attack << endl;
        player_1->health -= (p2_attack - p1_attack);
        cout << player_2->name << " wins again!" << endl<<endl;

       //print out health post-battle
        cout << player_1->name << "'s health is now " << player_1->health << endl;
        cout << player_2->name << "'s health is now " << player_2->health << endl;

        //attack points are the same - tie game
    } else {
        cout << "Tie!" << endl<<endl;
    }
}
//function to generate random number
int random(int low, int high) {
    return low + rand() % (high - low + 1);
}
//display dashed line
void dash() {
    for (int x = 1; x <= 20; x++) {
        cout << "-";
    }
    cout << endl;
}

