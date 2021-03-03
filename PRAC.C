#include<conio.h>
#include<stdio.h>
void cases(void);
void case6(void);
void c6pa(void);
int thvkmap[8];
char result[35]={"The required SOP expression is\n\t"};
void main(void)
{
 int n=0;
 clrscr();
 printf("\nEnter either 0 or 1 for the specified minterms:\n");
 for(n=0; n<8; n++)
  {
   printf("m%d = ",n);
   scanf("%d",&thvkmap[n]);
  }
 cases();
 getch();
}

void cases(void)
{
 int x=0;
 int y=0;
 for(x=0; x<8; x++)
 {
  y+=thvkmap[x];
 }
  if(y==6)
  case6();
}

void case6(void)
{
 int x=0;

 for(x=0; x<8; x++)
  {
   if(thvkmap[x]+thvkmap[x++]==0)
   {
   c6pa();
   }

  }

}
void c6pa(void)
{
 int x=0;
 int y=0;
 char horizonch[20][20]={"x+y","x+z'","x+y'","x'y'+xy+z","x'+y","x'+z'","x'+y'"};
 for(x=0; x<8; x++)
    {
     if(thvkmap[x]+thvkmap[y++]==0)
     break;
    }
     printf("%s%s",result,horizonch[x]);
}