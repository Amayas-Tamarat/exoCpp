#include <iostream>
using namespace std;

string palindrome(){
    string mot = "";
    string reversedMot = "";
    cout << "entre mot: ";
    cin >> mot;

    reversedMot = string(mot.rbegin(), mot.rend());
    if(reversedMot == mot){
        cout << "le mot est un palin";
    }else{
        cout << "le mot n'est pas un palin";
    };

    return mot;
}
