#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char string[100];
  int i=0;
  int flag=0;
  while(gets(string))
  {
    while(string[i]!='\0')
    {
      
      if(string[i]=='"'&&flag==0)
      {
        printf("``");
        flag++;
      }
      else if(string[i]=='"'&&flag==1)
      {
        printf("''");
        flag--;
      }
      
      if(string[i]!='"')
      {
        printf("%c",string[i]);
      }
      i++;
    }
    printf("\n");
    i=0;
  }



 return 0;
}
