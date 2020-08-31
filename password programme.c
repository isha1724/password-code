#include<stdio.h>
#include<string.h>
void main()
{
  char pwd[5];
  int i;
  char ch;
  printf("enter your password: ");
  for(i=0;i<4;i++)
  {
    ch=getch();
    pwd[i]=ch;
    printf("*");
  }
  pwd[i]='\0';
  if(strcmp(pwd,"abcd")==0)
  printf("\n password correct");
  else
  printf("\n password incorrect");
}
