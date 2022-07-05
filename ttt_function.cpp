#include <iostream>
#include <string>
#include <vector>
 std::vector<bool> filled_up = {false,false,false,false,false,false,false,false,false};
 std::vector<std::string> board = {" "," "," "," "," "," "," "," "," "};
 bool retry = false;
 
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

void is_filled(int Player1turn,int Player2turn,int isPlayer2turn, bool retry1){

            //Checking if a box is filled or not, and is make the player repick a box. 
            while(retry1 == true ){
            std::cout << "The box is filled please pick another one.\n";    
            if(isPlayer2turn == false){
                std::cout << "player1";
                std::cin >> Player1turn;
            }
            else{
                
                std::cin >> Player2turn;
            }
            }
}

//checking what box to put Player 1 "X"
void take_turn(int Player1turn, int Player2turn, bool isPlayer2turn){
      
        
        //fill box if player enters 1.
        if(Player1turn == 1 && board[0] == " "  || Player2turn == 1 && board[0] == " "){
            retry = false;
            if(Player1turn == 1){

                board[0] = 'X';
                filled_up[0] = true;
                draw();
               
            }
            else if(Player2turn == 1){
                std::cout << "1112";
                board[0] = 'O';
                filled_up[0] = true;
                draw();
            }
            
        }//Makes sure that the box is not filled.
        else if(board[0] == "O" || board[0] == "X" && Player1turn == 1 || Player2turn == 1){
               retry = true; 
                is_filled(Player1turn, Player2turn, isPlayer2turn, retry); 
            } 
        
        
}