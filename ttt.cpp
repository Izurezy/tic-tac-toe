#include <iostream>
#include <vector>
#include "ttt_function.hpp"


int main(){
    int PlayAgain = 0;
    int Player1turn;
    int Player2turn;
    bool isPlayer2turn = false;

    greeting();
    draw();
    while(PlayAgain == 0){
        //Player 1 turn
     std::cout << "Player 1 turn\n";
     std::cin >> Player1turn; isPlayer2turn = false;
     take_turn(Player1turn, Player2turn, isPlayer2turn);
        
        //Player 2 turn
     std::cout << "Player 2 turn\n";
     std::cin >> Player2turn; isPlayer2turn = true;
     take_turn(Player1turn, Player2turn, isPlayer2turn);
    }
}