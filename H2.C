#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,cnt=0;
  printf("enter the no.: ");
  scanf("%d",&num);
  while(num>0)
  {
   num=num/10;
   cnt++;
  }
  printf("%d",cnt);
  getch();
}
