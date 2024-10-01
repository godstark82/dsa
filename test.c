#include <stdio.h>

int main()
{
    int x, y, z;
    int A[] = {0, 7, 4, 3, 8, 6, 2, 9};
    int *p1 = A;
    int *p2 = A + 4;
    int *p3 = &x;
    x = 100;
    *p3 = *p1 + *p2;
    y = *p1 + A[2];
    z = *p2 + A[5];

    printf("\n %d %d %d", x, y, z);

    p1 = p1 + 1;
    y = p2 - p1;
    z = *p2 - *p1;
    x = x + *p1;
    
    printf("\n %d %d %d", x, y, z);

    return 0;
}