#include "oop.h"
#include "CLASS_complex.h"

#define THIS ((CLASS_COMPLEX *)this)

static void add(CLASS_COMPLEX *another);
static void print(void);


$MAKE_CLASS(CLASS_COMPLEX) = {
    .add = add,
    .print = print,
};

static void add(CLASS_COMPLEX *another)
{
    THIS->r += another->r;
    THIS->i += another->i;
}


static void print(void)
{
    printf("%d + %di\n", THIS->r, THIS->i);
}

