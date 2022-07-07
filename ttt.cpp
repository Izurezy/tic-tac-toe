#include <iostream>
#include <vector>
#include "ttt_function.hpp"


int main(){
    int Boxnumber;
    bool isPlayer2turn = false;

    greeting();
    draw();
        //Players turn
      
        take_turn(Boxnumber, isPlayer2turn); 
} 