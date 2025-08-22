#include <stdio.h>
int main()
{
   int matrix[3][3] = {1,0,-1,-1,2,3,2,4,5};
   int AA[3][3] = {0};
   int r,c,m;

   for(r=0; r<3; r++)
   {
       for(c=0; c<3; c++)
       {
            for(m=0; m<3; m++)
            {
                AA[r][c] = AA[r][c] + matrix[r][m]*matrix[m][c];
            }
            printf("%d ",AA[r][c]);
       }
       printf("\n");

   }
   

   
    
   
    
}
