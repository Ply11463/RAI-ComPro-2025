#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        char name[100];
        int age;
        float score;
        
    }st;

    int i;
    float maxvalue = 0.0;
    char highestsc[100];

    for(i=0; i<3; i++)
    {
        printf("student %d name:",i + 1);
        scanf("%s",st.name);
        printf("student %d age:",i + 1);
        scanf("%d",&st.age);
        printf("student %d score:",i + 1);
        scanf("%f",&st.score);

        if(st.score > maxvalue)
        {
            maxvalue = st.score;
            strcpy(highestsc, st.name);
        }

        
    }
    printf("The highest score belongs to %s at %.2f", highestsc, maxvalue);

}
    
    
