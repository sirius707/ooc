#ifndef CLASS_COMPLEX_H_INCLUDED
#define CLASS_COMPLEX_H_INCLUDED

typedef struct CLASS_COMPLEX CLASS_COMPLEX;
struct CLASS_COMPLEX{
    int r;
    int i;

    void $FUNC_PROTO(add)(CLASS_COMPLEX *another);
    void $FUNC_PROTO(print)(void);
};
$ClASS_HEADER(CLASS_COMPLEX);


#endif // CLASS_COMPLEX_H_INCLUDED
