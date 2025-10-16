#include <iostream>
#include<string> 
#include <sstream>

using namespace std;

int wordCount(){
    string phrase = "";
    getline(cin, phrase);
    stringstream ss(phrase);
    string t;
char del = ',';
    while (getline(ss, t, del))
        cout << "\"" << t << "\"" << " ";
    return 0;
}       