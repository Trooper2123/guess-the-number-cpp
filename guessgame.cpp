#include <iostream>
#include "stdlib.h"
#include "time.h"

int main () {
    std::cout << "*****************************" << std::endl ;
    std::cout << "* WELLCOME TO THE GUESS THE NUMBER GAME WITH C++!*" << std::endl;
    std::cout << "*****************************" << std::endl;

    srand(time(NULL));
    int SECRET_NUMBER = (rand() % 100) + 1;
    int max_try = 3;

while(max_try != 0){
    int your_try;
    std::cout << "Input your try: ";
    std::cin >> your_try;
    std::cout << " Your try was: " <<your_try<< std::endl;

    if(your_try == SECRET_NUMBER){
        std::cout << " YOU WON!" << std::endl;
        max_try = 0;
    }
    else if(your_try > SECRET_NUMBER){
        std::cout << "To hight! Try again."<< std::endl;
        max_try--;
    }
    else{
        std::cout << "To low ! Try again."<< std::endl;
        max_try--;
    }
}
std::cout << " The secret number was:" <<SECRET_NUMBER<< std::endl;
}