#include <stdio.h>

int main()
{
    struct time
    {
        int m;
        int s;
    }t[3];

    int totalsec = 0;

      for (int i = 0; i < 3; i++) 
      {
        printf("time input (m:s): ");
        scanf("%d:%d", &t[i].m, &t[i].s);
        totalsec += (t[i].m * 60)+(t[i].s);
      }

      printf("%d",totalsec);

}