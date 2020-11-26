#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////

typedef struct
    {
    int *data;
    int ptr;
    int capacity;
    int empty_num;
    } Stack;

/////////////////////////////////////////

void push (int num, Stack *my_st);
void pop (Stack *my_st);
void dump (Stack *my_st);
void construct (Stack *my_st);
void get_data (Stack *my_st);
void get_ptr (Stack *my_st);
void is_empty (Stack *my_st);

/////////////////////////////////////////

int main ()
    {
    Stack my_st;

    construct (&my_st);

    int i = 0;
    for(i = 0; i < 5; i++)
        {
        push (my_st.empty_num, &my_st);
        }

    my_st.ptr = 0;

    is_empty (&my_st);

    push (10, &my_st);

    get_data (&my_st);

    get_ptr (&my_st);

    is_empty (&my_st);

    push (10, &my_st);

    pop (&my_st);

    dump (&my_st);

    return 0;
    }

void construct (Stack *my_st)
    {
    my_st -> data= (int *) calloc (5, sizeof(my_st -> data[0]));
    my_st -> ptr = 0;
    my_st -> capacity = 5;
    my_st -> empty_num = -1984;
    }

void push (int num, Stack *my_st)
    {
    if (my_st -> ptr + 1 > my_st -> capacity)
        {
        my_st -> data = (int *) realloc (my_st -> data, (++ my_st -> capacity) * sizeof(int*));
        }

    (my_st -> data)[my_st -> ptr ++] = num;
    }

void dump (Stack *my_st)
    {
    int i = 0;
    int num = 0;

    for(i = 0; i < my_st -> capacity; i++)
        {
        num = (my_st -> data)[i];
        printf ("%d ", num);
        }

    printf ("\n");
    }

void pop (Stack *my_st)
    {
    (my_st -> data)[--my_st -> ptr] =  my_st -> empty_num;
    }

void get_data (Stack *my_st)
    {
    int num = 0;
    num = (my_st -> data)[my_st -> ptr - 1];

    printf ("Data[%d]: %d\n", my_st -> ptr - 1, num);
    }

void get_ptr (Stack *my_st)
    {
    printf ("Quantity: %d\n", my_st -> ptr);
    }

void is_empty (Stack *my_st)
    {
    if (my_st -> ptr == 0) printf ("Stack is empty\n");
    else printf ("Stack is not empty\n");
    }

void destroy (Stack *my_st)
    {
    free (my_st -> data);
    }
