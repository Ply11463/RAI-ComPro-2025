#include <stdio.h>

int main()
{
    int a = 0;
    int b = 5;
    
    printf("before reverse: %d,%d\n",a,b);
    
    int *ptra = &a;
    int *ptrb = &b;
    
    int s = *ptra;
    *ptra = *ptrb;
    *ptrb = s;

    printf("after reverse: %d,%d",a,b);
}