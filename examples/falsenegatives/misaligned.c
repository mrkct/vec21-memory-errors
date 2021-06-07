#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *a = malloc(sizeof(int) * 2); // 8-aligned
    int *u = (int*)((char*)a + 6);
    *u = 1; // Access to range [6-9]

    free(a);
    return 0;
}