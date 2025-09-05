#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    struct coor
    {
        float x;
        float y;
    }u,v,result;

    

    printf("u_x:");
    scanf("%f",&u.x);
    printf("u_y:");
    scanf("%f",&u.y);
    printf("v_x:");
    scanf("%f",&v.x);
    printf("v_y:");
    scanf("%f",&v.y);

    result.x = u.x + v.x;
    result.y = u.y + v.y;

    printf("Resultant vector is equivalent to %f + %f",result.x, result.y);
    return 0;
}
