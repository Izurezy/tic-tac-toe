#include <iostream>
#include <string>
#include <vector>
 std::vector<bool> filled_up = {false,false,false,false,false,false,false,false,false};
 std::vector<std::string> board = {" "," "," "," "," "," "," "," "," "};
 
                                //  0   1   2   3   4   5   6   7   8 index.
 int winner = 0;

void greeting(){

    std::cout << "================\n";
    std::cout << "   TIC TAC TOE\n";
    std::cout << "================\n";
    std::cout << "Player 1 is X and Player 2 is O\n";
    std::cout << "Cout the boxs then type the number you want to put X/O\n";

}

void draw(){
   

    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";
 
    std::cout << "\n";


}
//checking if player won.
void is_winner(){
    
   if (winner == 1){


   }

     
}
//checking what box to put Player "X/O"
void take_turn(int Boxnumber,bool isPlayer2turn){
        
       Boxnumber--;
        //fill box if player enters 1.
        if(board[Boxnumber] == " "  || board[Boxnumber] == " "){
            if(isPlayer2turn == false){

                board[Boxnumber] = 'X';
                filled_up[Boxnumber] = true;
                draw();
               
            }
            else if(isPlayer2turn == true){
                
                board[Boxnumber] = 'O';
                filled_up[Boxnumber] = true;
                draw();
            }
            
        }  
        
}

void is_filled(int Boxnumber,int isPlayer2turn){
               Boxnumber--;
            //Checking if a box is filled or not, and is make the player repick a box. 
    if(board[Boxnumber] == "X" || board[Boxnumber] == "O"){
        
            std::cout << "The box is filled please pick another one.\n";    
        if(isPlayer2turn == false ){
                
            std::cout << "player1";
            std::cin >> Boxnumber;
            
            take_turn(Boxnumber, isPlayer2turn);
        }
        else{
            std::cout << "ooddf";
            std::cin >> Boxnumber;
            take_turn(Boxnumber, isPlayer2turn);
                
        }
    }
}

