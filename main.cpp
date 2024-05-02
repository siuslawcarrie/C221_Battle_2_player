#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// player 1 struck
//struct player_1{
//    string name = "Carrie";
//    int health = 10;
//    int power = 5;
//};
//
//player 2 struct
//struct player_2{
//    string name = "C++";
//    int health = 10;
//    int power = 5;
//};

int main() {
    //variables to hold each players battle score
   int p1_attack;
   int p2_attack;

//print game title and each player's health
//   cout<<"Computer Programming Battle: "<< player_1 -> name << "vs" <<player_2 -> name;
//   cout <<player_1 -> name << "'s health is " <<player_1 -> health;
//    cout <<player_2 -> name << "'s health is " <<player_2 -> health;


    // Generate 2 random numbers, 1 for each player's battle score
    srand((unsigned) time(nullptr));
    //random numbers must be between 1 & 99
    p1_attack = rand() %  p1_health + 1;
    p2_attack = rand() % p2_health + 1;

    


return 0;
}

