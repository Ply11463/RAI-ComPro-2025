#include <stdio.h>
int main()
{
    int num;

    printf(" Enter a number: ");
    scanf("%d",&num);

    switch (num >= 0 && num <=100)
    {
        case 1:
            switch(num % 2)
            {
             case 1: printf("%d is even",num);
             break;
             case 2: printf("%d is odd",num);
             break;
            }
        break;
        default: printf("%d is out of range",num);
        

    }
 

    
    return 0;
}