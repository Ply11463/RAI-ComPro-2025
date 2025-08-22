#include <stdio.h>
int main()
{
    int matrix[3][3] = {1,0,-1,-1,2,3,2,4,5};
    int r,c;

    printf("Transpose of Marix A\n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            printf("%d ",matrix[c][r]);
        }
        printf("\n");
    }
    
}

    
    