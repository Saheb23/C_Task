#include<stdio.h>
#include<conio.h>
void main()
{
int unit;
float amt,total_amt,sur_charge;
clrscr();
printf("enter total units cousued:");
scanf("%d",&unit);
if(unit<=50)
{
amt=unit *0.05;
}
else if(unit<=150)
{
amt=25+((unit-50)* 0.75);
}
else if (unit<=250)
{
amt=100+((unit-150)* 1.20);
}
sur_charge=amt* 0.20;
total_amt=amt+sur_charge;
printf("electricity bill=Rs.%2f",total_amt);
getch();
}




















