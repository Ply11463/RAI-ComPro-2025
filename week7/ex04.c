#include <stdio.h>
int main()
{
    int size = 6;
    int array[] = {3,1,2,4,5,6};
    int i;
    int sum = 0;
    
    int *ptr = array;
    for(i=0; i<size; i++)
    {
        sum += *(ptr + i);
    }
    printf("the sum of array is %d",sum);

    return 0;
   
    
}