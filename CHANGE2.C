#include<conio.h>
#include<stdio.h>
#define LIM 5
void main(void)
{
 static int table[]={100, 50, 20, 10, 5};
 int dex, amount, quantity;
 clrscr();
 printf("Enter amount in rupees (form 367): ");
 scanf("%d",&amount);
 for (dex=0; dex<LIM; dex++)
  {
   quantity=amount/table[dex];
   printf("Value of coin=%2d, ",table[dex]);
   printf("number of coins=%2d\n",quantity);
   amount=amount%table[dex];
  }
 getch();
}