//profit & Loss
#include<stdio.h>
#include<conio.h>
 void main()
 {
  clrscr();
  float amt,cp,sp;
   printf("\n Enter The Cost Prise:  ");
   scanf("%f",&cp);
   printf("\n Enter The Selling Prise:  ");
   scanf("%f",&sp);
    if(sp>cp)
     {
      amt=sp-cp;
      printf("\n profit= %f ",amt);
     }
    else if(cp>sp)
     {
      amt=cp-sp;
      printf("\n Loss=%f",amt);
     }
    else
     {
      printf("\n No Profit No Loss");
     }
   getch();
   }
