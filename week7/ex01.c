#include <stdio.h>
 
int main()
{
    int test = 0;
    int *Ptr = &test;

    printf("The address of the test variable is at: %p",Ptr);
}