#include <stdio.h>
int main()
{
    int i,num; 

    printf(" Enter a number: ");
    scanf("%d",&num);

    printf("Multiplication table for %d\n", num);
    for(i=1; i <= 12; i++)
    {
        printf("%d * %d = %d\n",i,num,num*i);
    }
    return 0;
}