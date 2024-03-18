#ifndef OOP_H_
#define OOP_H_

#include <stdlib.h>
#include <stdio.h>

extern void *this;

#define $FUNC_PROTO(M)(*M)
#define $FUNC_BIND(M) .M = M

#define $MAKE_CLASS(CLASS) CLASS CLASS##_CLASS_prototype

#define $NEW(CLASS)

#define $INSTANCE(CLASS) CLASS##_CLASS_prototype

#define $(O) (this = &O), O

#define $THIS(CLASS) ((CLASS *)this)
//in .h
#define $ClASS_HEADER(CLASS) extern CLASS CLASS##_CLASS_prototype

#endif // OOP_H_
