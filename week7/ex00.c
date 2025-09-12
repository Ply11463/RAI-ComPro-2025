#include <stdio.h> 
#include <string.h>

int main()
{
  struct profile
  {
    char name[30];
    int age;
  }s[10];

  struct profile *sPtr;
  sPtr = s;
  int i; 

  for(i=0; i<10; i++)
  {
    printf("Student #  %d\n\tName :",i+1);
    scanf("%s",sPtr->name);
    printf("\tAge:");
    scanf("%d",&(sPtr->age));
    sPtr++;
  }
  sPtr -= 10;
  for(i=0; i<10; i++)
  {
    if((sPtr->age)> 20)
    printf("\n%s, %d",sPtr->name,sPtr->age);
    sPtr++;
  }
  return 0;
  

  


}







