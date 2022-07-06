#include <iostream>
#include <vector>
#include "ttt_function.hpp"


int main(){
    int PlayAgain = 0;
    int Boxnumber;
    bool isPlayer2turn = false;

    greeting();
    draw();
    while(PlayAgain == 0){
        //Player 1 turn
        std::cout << "Player 1 turn\n";
        std::cin >> Boxnumber; isPlayer2turn = false;
        is_filled(Boxnumber, isPlayer2turn);
        take_turn(Boxnumber, isPlayer2turn);
        
        //Makes sure that the box is not already filled.       
        
        
        //Player 2 turn
        std::cout << "Player 2 turn\n";
        std::cin >> Boxnumber; isPlayer2turn = true;
        is_filled(Boxnumber, isPlayer2turn);
        take_turn(Boxnumber, isPlayer2turn);
        
    }
}