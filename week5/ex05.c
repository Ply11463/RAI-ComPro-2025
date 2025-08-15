#include <stdio.h>
int main()
{
    
    int value[8];
    int min = value[0];
    int max = value[0];

    for(int i=0; i<10; i++)
    {
        printf("Enter value %d :", i+1);
        scanf("%d",&value[i]);
        
        if(value[i] < min)
        {
            min = value[i]; 
        }
        if(value[i] > max)
        {
           max = value[i]; 
        }
    }
     printf("smallest number : %d\n",min);
    printf("largest number : %d\n",max);

    return 0;
}