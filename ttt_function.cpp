#include <iostream>
#include <string>
#include <vector>
std::vector<bool> filled_up = {false,false,false,false,false,false,false,false,false};
std::vector<std::string> board = {" "," "," "," "," "," "," "," "," "};
std::string y_n = " ";
std::string change_y_n = " ";
int Player1turns = 0;
bool changePlayer = false;
bool winner = false;
bool Draw = false; 
bool stop = false;
                                //  0   1   2   3   4   5   6   7   8 index.
 

void greeting(){

    std::cout << "================\n";
    std::cout << "   TIC TAC TOE\n";
    std::cout << "================\n";
    std::cout << "Cout the boxs then type the number you want to put X/O\n";
    std::cout << "Player 1 X or O\n";
    std::cin >> change_y_n;

    if(change_y_n == "O" || change_y_n == "o"){

        changePlayer = true;
    }
    else if(change_y_n == "X" || change_y_n == "x"){

        changePlayer = false;
    }
    
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



//checking what box to put Player "X/O"
void set_position(int Boxnumber,bool isPlayer2turn){
     Boxnumber--;
    //fill box if player enters 1.
    if(board[Boxnumber] == " "  || board[Boxnumber] == " "){
        if(isPlayer2turn == false){
            if(changePlayer == false){
                   
                board[Boxnumber] = 'X';
                filled_up[Boxnumber] = true;
                Player1turns++;
                draw();
            }
            else{

                board[Boxnumber] = 'O';
                filled_up[Boxnumber] = true;
                draw();
            }
        }
        else if(isPlayer2turn == true){
            if(changePlayer == true){

                board[Boxnumber] = 'X';
                filled_up[Boxnumber] = true;
                Player1turns++;
                draw();
            } 
            else{

                board[Boxnumber] = 'O';
                filled_up[Boxnumber] = true;
                draw();
            }         
        }        
    }
}

void if_filled(int Boxnumber,int isPlayer2turn){
               Boxnumber--;
              
            //Checking if a box is filled or not, and is make the player repick a box. 
    if(board[Boxnumber] == "X" || board[Boxnumber] == "O"){
        
            std::cout << "The box is filled please pick another one,";    
        if(isPlayer2turn == false ){
                
            std::cout << "Player1.\n";
            std::cin >> Boxnumber;
            
            set_position(Boxnumber, isPlayer2turn);
        }
        else{
             std::cout << "Player2.\n";
            std::cin >> Boxnumber;
            set_position(Boxnumber, isPlayer2turn);
                
        }
    }
}



//checking if A player won.
void is_winner(){
    
    //horziontal 
    if((board[0] == board[1]) && (board[1] == board[2]) && board[0] != " "){
        winner = true;
        stop = true;
    }
    else if((board[3] == board[4]) && (board[4] == board[5]) && board[3] != " "){
        winner = true;
        stop = true;
    }
    else if((board[6] == board[7]) && (board[7] == board[8]) && board[6] != " "){
        winner = true;
        stop = true;
    }
    //vertical
    else if ((board[0] == board[3]) && (board[3] == board[6]) && board[0] != " "){
        winner = true;
        stop = true;
    }
    else if ((board[1] == board[4]) && (board[4] == board[7]) && board[1] != " "){
        winner = true;
        stop = true;
    }
    else if ((board[2] == board[5]) && (board[5] == board[8]) && board[2] != " "){
        winner = true;
        stop = true;
    }
    //diagonals
    else if ((board[0] == board[4]) && (board[4] == board[8]) && board[0] != " "){
        winner = true;
        stop = true;
    }
    else if ((board[2] == board[4]) && (board[4] == board[6]) && board[2] != " "){
        winner = true;
        stop = true;
    }

}


void end_game(int Boxnumber, bool isPlayer2turn){
     
    for(int i = 0;i < filled_up.size(); i++){

        if(filled_up[i] == true){
            Draw = true;
        }
    }
    if(winner == true){
       
        std::cout << "You won!\n";
        std::cout << "Do you wish yo play again? y/n\n";
        std::cin >> y_n;
        
    }
    else if(winner == false && Draw == true && Player1turns == 5){

       std::cout << "Draw Nobody wins\n";
        std::cout << "Do you wish yo play again? y/n\n";
        std::cin >> y_n;
        
    }

    if(y_n == "y"){
        
        filled_up = {false,false,false,false,false,false,false,false,false};
        board = {" "," "," "," "," "," "," "," "," "};
        y_n = ' ';
        Player1turns = 0;
        winner = false;
        Draw = false; 
        stop = false;
        greeting();
        draw();
        
    }
    else if(y_n == "n"){
        std::cout << "Byeee\n";
    }
}



void take_turn(int Boxnumber, bool isPlayer2turn){
    while(stop == false){
        
        //Player 1 turn
        
        if(stop == false){
        std::cout << "Player 1 turn\n";
        std::cin >> Boxnumber; isPlayer2turn = false;
        if_filled(Boxnumber, isPlayer2turn);
        set_position(Boxnumber, isPlayer2turn);
        is_winner();
        end_game(Boxnumber, isPlayer2turn);
        }
        
        
        //Player 2 turn

        if(stop == false){
        std::cout << "Player 2 turn\n";
        std::cin >> Boxnumber; isPlayer2turn = true;
        if_filled(Boxnumber, isPlayer2turn);
        set_position(Boxnumber, isPlayer2turn);
        is_winner();
        end_game(Boxnumber, isPlayer2turn);
        }
        
    }
}


 

