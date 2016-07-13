#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char a;
clrscr();
printf("Enter the character:");
scanf("%c",&a);
for(i=1;i<=255;i++)
{
printf("The ascii value is %d\n",i);
}
getch();
}
