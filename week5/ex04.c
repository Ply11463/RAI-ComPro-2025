#include <stdio.h>
int main()
{
    
    int value[10];
    int even = 0;
    int odd = 0;

    for(int i=0; i<10; i++)
    {
        printf("Enter value %d :", i+1);
        scanf("%d",&value[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(value[i] % 2 == 0)
        {
            even++; 
        }
        else
        {
            odd++;
        }
    }
    printf("even number : %d\n",even);
    printf("odd number : %d\n",odd);

    return 0;
}