#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"

/////////////////////////////////////////

int main ()
    {
    Stack my_st;

    construct (&my_st, 5);

    int i = 0;
    for (i = 0; i < 20; i++)
        {
        push (&my_st, 110 + i);
        }

    push (&my_st, 101010);

    dump (&my_st);

    destroy (&my_st);

    return 0;
    }
