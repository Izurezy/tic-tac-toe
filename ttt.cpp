#include <iostream>
#include <vector>
#include "ttt_function.hpp"


int main(){
    bool PlayAgain = true;
    int Boxnumber;
    bool isPlayer2turn = false;

    greeting();
    
    while(PlayAgain == true){
        is_winner(PlayAgain);
        //Player 1 turn
        std::cout << "Player 1 turn\n";
        std::cin >> Boxnumber; isPlayer2turn = false;
        if_filled(Boxnumber, isPlayer2turn);
        take_turn(Boxnumber, isPlayer2turn);
        
        //Makes sure that the box is not already filled.       
        
        
        //Player 2 turn
        std::cout << "Player 2 turn\n";
        std::cin >> Boxnumber; isPlayer2turn = true;
        if_filled(Boxnumber, isPlayer2turn);
        take_turn(Boxnumber, isPlayer2turn);
        
        
    }
}