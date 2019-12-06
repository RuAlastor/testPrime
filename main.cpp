#include "mathclass.h"

#define DEBUG

#ifdef DEBUG
#include <iostream>
#endif

int main()
{
    std::vector< long > tmp;
    MathClass::_findDividers( 20, tmp );

    std::cout << tmp.size() << '\n';


    std::cout << MathClass::_compEulerFunc( 20 ) << '\n';

    return 0;
}
