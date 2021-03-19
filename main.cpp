#include "Types.h" //Библиотека, с обьявлениями функций нужных для работы стэка с различными типами данных

#define print_err printf ("A critical programm error has occured.\nFile:%s\nLine: %d\n", __FILE__, __LINE__);

#define TYPE float
#include "Stack.h"
void print (TEMPLATE(Stack, TYPE) my_st);

void print (TEMPLATE(Stack, TYPE) stk) {

    stk.dump ();

    return;
}
#undef TYPE

#define TYPE int
#include "Stack.h"
#undef TYPE

#define TYPE double
#include "Stack.h"
#undef TYPE

#define TYPE char
#include "Stack.h"
#undef TYPE

int main() {
    Stack_float stk;

    for (int i = 0; i < 10; i++) stk.push (346);

    stk.dump ();

    return 0;
}
