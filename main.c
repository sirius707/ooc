#include <stdio.h>
#include <stdlib.h>

#include "oop.h"

#include "CLASS_complex.h"

//void add(int a, int b);
//typedef struct F{
//    int a;
//    int b;
//    void $FUNC_PROTO(hello)(int a, int b);
//}F;
//
//$MAKE_CLASS(F) = {
//    .hello = add
//};
//


int main()
{
    CLASS_COMPLEX complex_a = $INSTANCE(CLASS_COMPLEX);
    CLASS_COMPLEX complex_b = $INSTANCE(CLASS_COMPLEX);

    $(complex_a).r = 10;
    $(complex_a).i = 2;

    $(complex_b).r = 1;
    $(complex_b).i = 1;

    $(complex_a).add(&complex_b);
    $(complex_a).print();

    return 0;
}


