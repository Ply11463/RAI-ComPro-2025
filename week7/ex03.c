#include <stdio.h>
int main()
{
    int array[6] = {3,1,2,4,5,6};
    int *ptr = &array[0];
    int i;
    int max = array[0];
   
    

    for(i=0; i<6; i++)
    {
        if(max < *ptr)
        {
            max = *ptr;
        }
        ptr++;
    }

    printf("Max value : %d",max);
    
}