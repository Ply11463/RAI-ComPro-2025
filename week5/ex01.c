#include <stdio.h>
int main()
{
    int i;
    int values[10];
    
    for(i=0; i<10; i++)
    {
        printf("Enter value %d here: ",i+1);
        scanf("%d",&values[i]);

    }
    printf("Values in array are:");
    for(i=0; i<10; i++)
    {
        printf("%d,",values[i]);
    }
    return 0;

}
    
    
  
        