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
    
    for(i=0; i<3; i++)
    {
        printf("student %d name:",i + 1);
        scanf("%s",st.name);
        printf("student %d age:",i + 1);
        scanf("%d",&st.age);
        printf("student %d score:",i + 1);
        scanf("%f",&st.score);
    }
     

    
    
}

