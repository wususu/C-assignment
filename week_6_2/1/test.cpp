#include <iostream>
#include "golf.h"

int main()
{
    golf user[10];
    for(int i=0; i<10; i++)
    {
        setgolf(user[i]);
    }

    for(int i=0; i<10; i++)
    {
        showgolf(user[i]);
    }
    return 0;
}