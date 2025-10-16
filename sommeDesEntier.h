#include <iostream>

int sommeDesEntiers(int _nb){
   int i = _nb;
    while (i >= 1)
    {
     _nb = i + _nb;
     i -= 1;
    }
    return _nb;
}
