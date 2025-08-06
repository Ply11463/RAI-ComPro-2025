#include <stdio.h>
int main()
{
    int height;
    int radius;
    float pi = 3.14;
    float con = 0.33;

    printf(" Enter cone height: ");
    scanf("%d",&height);
    printf(" Enter base radius: ");
    scanf("%d",&radius);
    
    float volume = (con * pi * radius * radius * height);
    printf(" Cone volume = %f\n",volume);

    if(volume > 260)
    {
        printf(" This cone is perfect for Supun project\n ");
    }
    else
    {
        printf(" This cone is not fit for this project\n ");
    }

    return 0;
}