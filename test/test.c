#include "ctest.h"
#include <math.h>
#include <STreug.h>

CTEST(test, data_1)
{
	
    // Given
    const float a = 10;
    const float b = 15;
    const float y = 60;
    // When
    	double S;
   const int result = st(a, b, y, &S);


    // Then
    const double exp = 64.9519;
    ASSERT_EQUAL(exp, S);
}

CTEST(test, data_2)
{
    // Given
    const float a = 1;
    const float b = 5;
    const float y= 30;
    // When
    	double S;
    const int result = st(a, b, y, &S);
	
    // Then
    const float exp = 1.25;
    ASSERT_EQUAL(exp, S);
}



