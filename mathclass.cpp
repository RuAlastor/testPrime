#include "mathclass.h"

#include <cmath>
#include <iostream>

//-------------------------------------------------------------------------------------------------

using Error = MathClass::MathClassErrors;

//-------------------------------------------------------------------------------------------------

MathClass::MathClass()
{
}

//-------------------------------------------------------------------------------------------------
/* http://e-maxx.ru/algo/export_euler_function */

long MathClass::_compEulerFunc( long num )
{
    auto res = num;
    auto upperBraker = static_cast< long >( num );
    for ( long i = 2; i <= upperBraker; ++i )
    {
        if ( num % i == 0 )
        {
            while ( num % i == 0 )
            { num /= i; }
            res -= res / i;
        }
    }
    if ( num > 1 )
    { res -= res / num; }

    return res;
}

//-------------------------------------------------------------------------------------------------

bool MathClass::_isPrime( long num )
{
    if ( num == 0 || num == 1 )
    { return false; }
    if ( num == 2 || num == 3 )
    { return true; }

    auto upperBraker = static_cast< long >( std::sqrt( num ) );
    for ( long i = 2; i <= upperBraker; ++i )
    {
        if ( num % i == 0 )
        { return false; }
    }
    return true;
}

//-------------------------------------------------------------------------------------------------

Error MathClass::_findDividers( long num, std::vector< long >& outputVec )
{
    outputVec.push_back( 1 );
    auto upperBraker = static_cast< long >( num / 2 );
    for ( long i = 2; i <= upperBraker; ++i )
    {
        if ( num % i == 0 && _isPrime( i ) )
        { outputVec.push_back( i ); }
    }
    outputVec.push_back( num );

    return Error::noError;
}

//-------------------------------------------------------------------------------------------------
