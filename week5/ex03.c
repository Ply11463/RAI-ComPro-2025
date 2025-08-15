#include <stdio.h>
int main()
{
    int i;
    int mark[5];
    int sum=0;
    int max = mark[0];

    for(i=0; i<5; i++)
    {
        printf("Enter the marks of student %d :",i+1);
        scanf("%d",&mark[i]);
        sum = sum + mark[i];
        
        if(mark[i] > max)
        {
             max = mark[i];
        } 
    }
    printf("The total mark is %d :\n",sum);
    printf("Highest mark: %d",max);
    
    
    
    
   
        
           
        
        
    
    return 0;
}