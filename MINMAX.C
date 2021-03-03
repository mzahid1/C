#include<conio.h>
#include<stdio.h>
void cases(void);
void case1(void);
void case5(void);

int twvkmap[4];
char m2v[4][4]={"x'y'", "x'y","xy'","xy"};   /*min terms*/
char M2v[4][5]={"x+y","x+y'","x'+y","x'+y'"};   /*max terms*/

void main(void)
{
 int n=0;
 clrscr();
 printf("\nEnter either 0 or 1 for the specified minterms:\n");
 for(n=0; n<4; n++)
  {
   printf("m%d = ",n);
   scanf("%d",&twvkmap[n]);
  }
 cases();
 getch();
}
void cases(void)
{
 int x=0;
 int y=0;
 for(x=0; x<4; x++)
 {
  y+=twvkmap[x];
 }
  if(y==1)
  case1();
  if(y==4)
  case5();

}

void case1(void)
{
 int x=0;

 for(x=0; x<4; x++)
  {
   if (twvkmap[x]==1)
   break;
  }
   printf("The required SOP expression is\n%s",m2v[x]);
}

void case5(void)
{
 printf("The required SOP expression is\n%d",1);
}