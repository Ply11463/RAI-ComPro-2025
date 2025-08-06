#include <stdio.h>
int main()
{
    int num1, num2, result;
    int menu;

    printf(" Enter num1: ");
    scanf("%d", &num1);
    printf(" Enter num2: ");
    scanf("%d", &num2);
    printf(" Calculation Menu:\n1. +\n2. -\n3. *\n4. /\n5. %% ");
    scanf("%d", &menu);

    switch (menu)
    {
        case 1:
            result = num1 + num2;
            printf(" result: %d + %d = %d", num1,num2,result);
            break;
        case 2:
            result = num1  num2;
            printf(" result: %d - %d = %d", num1,num2,result);
            break;


    }

}