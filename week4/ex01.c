#include <stdio.h>
int main()
{
    int i,num,sum = 0;
    float avg;
    for(i=1; i <= 10; i++)
    {
        printf(" %d Enter a number: ",i);
        scanf("%d",&num);
        sum = sum + num;
    }
    printf("Total sum is %d\n",sum);
    avg = sum/10;
    printf(" Average is %f",avg);
}