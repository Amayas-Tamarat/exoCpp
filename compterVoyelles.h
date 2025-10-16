#include <iostream>

int compteurDeVoyelles (std::string _mot){
    int compte = 0;
    for (char c  : _mot){
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                compte++;
                break;
            default:
                break;
        }
    }
    return compte;

}