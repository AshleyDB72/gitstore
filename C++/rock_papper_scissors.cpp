
#include <iostream>
#include <stdlib.h>
#include <time.h

int main() {
    
    srand (time(NULL));
    int computer = rand() % 3+1;
    int user =0;

    std::cout << "====================\nt";
    std::cout << "rock paper scissors\n";
    std::cout << "====================\n";

    std::cout <<"1)  rock"
     
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout <<"Shoot!";
    std::cin >> user

    if ((user==1 and computer==0)or (user==2 and computer== -1)or (user==3 and computer==1)){
        std::cout << "Tie\n";
    }
    else if ((user==3 and computer==0)or (user=1 and computer==1)){
        std::cout << "Rock/n";
    }
    else if ((user==2 and computer==0)or(user==1 and computer==-1)){
        std::cout << "Paper\n";
    }
    else if ((user==3 and computer==-1)or(user==2 and computer==1)){
        std::cout << "Scissors";
     }
     else{
         std::cout << "Not found\n";
     }

}