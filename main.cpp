/* Carrie Bailey
 * CS 221 Spring 2024
 *Week 4, Exercise #5
 * Description: 2 computer players have health points and power level. Each gets a random
 * number between 0 and their power level. Winner has points subtracted from health points.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// player 1 struck
struct Player {
    string name;
    int health;
    int power;
};


void battle(Player *player, Player *player2);
int random(int low, int high);

int main() {


    Player player_1, player_2;
    player_1.name = "Carrie";
    player_1.health = 10;
    player_1.power = 5;

    player_2.name = "C++";
    player_2.health = 10;
    player_2.power = 5;

    return 0;
}
void battle(Player *player_1, Player *player_2){
    //variables to hold each players battle score
   int p1_attack;
   int p2_attack;

    //print game title and each player's health
//   cout<<"Computer Programming Battle: "<< player_1 -> name << "vs" <<player_2 -> name;
//   cout <<player_1 -> name << "'s health is " <<player_1 -> health;
//    cout <<player_2 -> name << "'s health is " <<player_2 -> health;


    // Generate 2 random numbers, 1 for each player's battle score
    srand((unsigned) time(nullptr));
    //random numbers must be between 0 and each player's power level
    p1_attack = random(0, player_1 ->power);
    p2_attack = random(0, player_2 -> power);

    //player 1 wins battle
    if (p1_attack >p2_attack){
        player_2 -> health -= (p1_attack - p2_attack);
        cout<<"Great job "<<player_1 -> name<< " you win for once!";
    }
    else{
        player_1 ->health -= (p2_attack - p1_attack);
        cout<<player_2 ->name<<" wins again!";
    }
}
    int random(int low, int high)
    {
        return low + rand() % (high - low + 1);


}

