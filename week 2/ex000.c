#include <stdio.h>
int main()
{
    /*float point;
    char name[20];
    printf("Enter your name :");
    scanf("%[^\n]", name);
    printf("Enter your point : ");
    scanf("%f", &point);

    printf(" Name : %s\nPoint : %.3f" , name, point);*/


    /*char a = 10;
    printf("%d", 10*2*3-10/7);
    printf("%d", 10*2*(3-10)/7);
    printf("%d", 10*2>2+3);
    printf("%d", 10*2 < 2+3);*/

   

    char name[20];
    float pro,draw,Phy;
    printf(" Enter your Programming score :  ");
    scanf("%[^\n]", pro);
    printf(" Enter Drawing score          :   ");
    scanf("%f", &draw);
    printf(" Enter your Physics score     :   ");
    scanf("%f", &Phy);
    printf("**SHOW**");
    printf("Name      : %s\n", name);
    printf(" AVG score: %5.2f\n", (pro + draw + Phy)/3);

    
    
    
    return 0;
}