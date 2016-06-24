#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr;
printf("Enter an integer:");
scanf("%d",&a);
if(a%2==0)
{
printf("The integer %d is even",a);
}    
else
{
printf("The integer %d is odd",a);
}
getch();
}
