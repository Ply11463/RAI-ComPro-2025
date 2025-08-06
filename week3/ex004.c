#include <stdio.h>
int main()
{
    char name[20];
    int cal,phy,sci;
    //float avg = ((cal + phy + sci)/3.0);

    printf(" Enter your name: ");
    scanf("%s", name);
    printf(" Enter your Calculus score: ");
    scanf("%d", &cal);
    printf(" Enter your Physics score: ");
    scanf("%d", &phy);
    printf(" Enter your Science score: ");
    scanf("%d", &sci);

    float avg = ((cal + phy + sci)/3.0);

    if(avg >= 80)
    {
        printf(" %s Your average is %.2f you got grade A\n", name,avg);
    }
    else if(avg >= 70 && avg <80)
    {
        printf(" %s Your average is %.2f you got grade B\n", name,avg);
    }
    else if(avg >= 60 && avg < 70)
    {
        printf(" %s Your average is %.2f you got grade C\n", name,avg);
    }
     else if(avg >= 50 && avg < 60)
    {
        printf(" %s Your average is %.2f you got grade D\n", name,avg);
    }
    else
    {
        printf(" %s Your average is %.2f you got grade F\n", name,avg);
    }

    return 0;
    
    
 
}