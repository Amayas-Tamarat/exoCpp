#include <iostream>

void multi (int _nb){
 std::cout << "entre nombre: ";
 std::cin >> _nb;
 for (int i = 1 ; i <= 10; ++i){
 std::cout << _nb << " * " << i << " = " << _nb * i << std::endl;
}
}