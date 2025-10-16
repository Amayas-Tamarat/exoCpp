#include <iostream>

std::string guessNumber(){
    int randomNumber = rand() % 100;
    int nombreChoisie = 0;
    std::cout << "entre nombre: ";
    std::cin >> nombreChoisie;

    while (randomNumber != nombreChoisie){
        if (nombreChoisie < randomNumber){
            std::cout << "plus grand" << std::endl;
            std::cin >> nombreChoisie;
        } else {
            std::cout << "plus petit" << std::endl;
            std::cin >> nombreChoisie;
        }
    }
    return "Nombre deviné";
}