#include "function.h"
#include <fstream>



void main_menu(){
    std::cout << "*********************" << std::endl;
    std::cout << "| Guess a random number ------ 1| " << std::endl; 
    std::cout << "| Hang the man --------------- 2| " << std::endl; 
    std::cout << "| About ---------------------- 3|" << std::endl; 
    std::cout << "| Quit ----------------------- 8|" << std::endl; 
    std::cout << "*********************" << std::endl; 

}

void player_menu(int game_type){
    std::cout << "********************************" << std::endl; 
    std::cout << "|Single Player --------------  1|" << std::endl; 
    std::cout << "|Multiple Player ------------  2|" << std::endl; 
    std::cout << "|Back -----------------------  3|" << std::endl; 
    std::cout << "*********************************" << std::endl; 
}

class Player{
    public: 
        virtual void updateScore(int pts){
            
        }
    private:
        std::string name; 
        int score; 

}; 
