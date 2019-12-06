#ifndef MATHCLASS_H
#define MATHCLASS_H

#include <vector>

class MathClass
{

public:
    enum MathClassErrors
    {
        noError = 0
    };

public:
    MathClass();

// private:
    static long            _compEulerFunc   ( long );
    static MathClassErrors _findDividers    ( long, std::vector< long >& );
    static bool            _isPrime         ( long );
};

#endif // MATHCLASS_H
