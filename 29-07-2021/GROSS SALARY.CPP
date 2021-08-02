//gross salary
#include<stdio.h>
#include<conio.h>
void main()
 {
  float salary,gross,hra,da;
  clrscr();
  printf("\n Enter The Basic Salary:  ");
  scanf("%f",&salary);
   if(salary <= 10000)
    {
     da=(salary*80)/100;
     hra=(salary*20)/100;
    }
   else if(salary<=20000)
    {
     da=(salary*90)/100;
     hra=(salary*25)/100;
    }
   else
   {
     da=(salary*95)/100;
     hra=(salary*30)/100;
     }
     gross=salary+da+hra;
     printf("\n Basic Salary = %f \n HRA Amount   = %f \n DA Amount   = %f \n Gross Salary = %f",salary,hra,da,gross);

 getch();
 }
