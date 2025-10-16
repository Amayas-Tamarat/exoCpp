#include <iostream>
using namespace std;

float calculator(){
    char op;
    int nb1, nb2, res;

    cout << "entrer le 1er chiffre.";
    cin >> nb1;
    cout << "entrer le 2eme chiffre.";
    cin >> nb2;
    cout << "entrer un symbole (+, -, *, /): ";
    cin >> op;
    switch(op){
        case '+':
            res = nb1 + nb2;
            break;
        case '-':
            res = nb1 - nb2;
            break;
        case '*':
            res = nb1 * nb2;
            break;
        case '/':
            if(nb2 != 0){
                res = nb1 / nb2;
            } else {
                cout << "Impossible: Division par zero!" << endl;
                return 0;
            }
            break;
        default:
            cout << "Operateur inconnu" << endl;
            return 0;
    }
    cout << "Le resultat est: " << res << endl;
    return 0;
}