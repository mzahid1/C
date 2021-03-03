/* stores list of secret agents' travel expenses */
#include<conio.h>
#include<stdio.h>
#define ROWS 10
#define COLUMNS 2
void main(void)
{
 float agents [ROWS][COLUMNS];
 float number, expenses;
 int index=0, outdex;
 clrscr();
 printf("Enter 3-digit agent numbers,\n");
 printf("then travel expenses (007 1643.50)\n");
 printf("Enter 0 0 to quit.\n");
 do
  {
  printf("Agent's number and expenses: ");
  scanf("%f %f",&number, &expenses);
  agents[index][0]=number;
  agents[index][1]=expenses;
  }
 while(agents[index++][0]!=0);

 for (outdex=0; outdex<index-1;outdex++)
  {
   printf("Agent %03.0f ",agents[outdex][0]);
   printf("spent %7.2f.\n",agents[outdex][1]);
  }
 getch();
}