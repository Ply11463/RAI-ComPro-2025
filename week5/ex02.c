#include <stdio.h>
int main()
{
    int original[9] = {1,2,3,4,5,6,7,8,9};
    int i;
    
    printf("Reverse array:");
    for(i=8; i>=0; i--)
    {
        printf("%d,",original[i]);
    }
    
    return 0;
}