#include<conio.h>
#include<stdio.h>
void case3(void);
int twvkmap[4];
char v2[4][4]={"x","x'","y'","y"};
char m2v[4][4]={"x'y'", "x'y","xy'","xy"};
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
 case3();
 getch();
}

void case3(void)
{
 if(twvkmap[0]==0)
 {
  printf("The required SOP expression is\n\t%s+%s",v2[0],v2[3]);
 }
 else
 if(twvkmap[1]==0)
 {
  printf("The required SOP expression is\n\t%s+%s",v2[0],v2[2]);
 }
 else
 if(twvkmap[2]==0)
 {
  printf("The required SOP expression is\n\t%s+%s",v2[1],v2[3]);
 }
 else
 if(twvkmap[3]==0)
 {
  printf("The required SOP expression is\n\t%s+%s",v2[1],v2[2]);
 }
}