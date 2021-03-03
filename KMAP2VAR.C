#include<conio.h>
#include<stdio.h>
void cases(void); void case0(void); void case1(void); void case2(void);
void c2pa(void); void c2pb(void); void c2pc(void);
void case3(void); void case4(void);
int twvkmap[4];  /*input array for the min terms*/
char v2[4][5]={"x","x'","y'","y"};  /*variables and their compliments*/
char m2v[4][4]={"x'y'", "x'y","xy'","xy"};   /*min terms*/
char result[35]={"The required SOP expression is\n\t"};

void main(void)
{
 int k=0;
 int n=0;
 clrscr();
 printf("Programmed by: Muhammad Zahid (Telecom Engineering - batch: 2015-2016 NEDUET)\n\n");
 printf("karnaught-map programmed in c-language (August, 2017)\n\nInstructions:\n\t");
 printf("1. When asked for the n-variable k-map, input an integer number.\n\t   Example: 2, 3 etc \n\t");
 printf("2. This program gives the answer in the SOP (sum-of-products) form,\n\t   POS (product-of-sum) form can be obtained by taking the compliment of\t   the SOP form.\n\t");
 printf("3. To quit the program: Write any number > 2^n of that specific \n\t   n-variable k-map.\n\t   Example: Enter number > 4 to quite the 2-variable k-map");

 printf("\n\nSpecify the n-variable k-map to solve for the minimized expression:\n\n\t");
 scanf("%d",&k);
 if (k==2)
 {
  printf("\nTwo-variable k-map:\n");
  do
  {
   printf("\n\nEnter either 0 or 1 for the specified minterms:\n");
   for(n=0; n<4; n++)
   {
    printf("m%d = ",n);
    scanf("%d",&twvkmap[n]);
   }
   cases();
  }
  while((twvkmap[0]+twvkmap[1]+twvkmap[3]+twvkmap[4])<5);
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
  if(y==0)
  case0();
  if(y==1)
  case1();
  if(y==2)
  case2();
  if(y==3)
  case3();
  if(y==4)
  case4();
}

void case1(void)
{
 int x=0;
 for(x=0; x<4; x++)
  {
   if (twvkmap[x]==1)
   break;
  }
   printf("%s%s",result,m2v[x]);
}

void case2(void)
{
 int x=0;
 for (x=1; x<4; x++)
 {
  if (twvkmap[0]+twvkmap[x]==2)
  {
   c2pa();
  }
 }
 for (x=2; x<4; x++)
 {
  if (twvkmap[1]+twvkmap[x]==2)
  {
   c2pb();
  }
 }
 for (x=3; x<4; x++)
 {
  if (twvkmap[2]+twvkmap[x]==2)
  {
   c2pb();
  }
 }
}

void c2pa(void)
{
 char partach[10][10]={"", "x'", "y'", "x'y'+xy"};
 int x=0;
 for (x=1; x<4; x++)
 {
  if (twvkmap[0]+twvkmap[x]==2)
  break;
 }
 printf("%s%s", result, partach[x]);
}

void c2pb(void)
{
 char partbch[10][10]={"", "", "x'y+xy'", "y"};
 int x=0;
 for (x=2; x<4; x++)
 {
  if (twvkmap[1]+twvkmap[x]==2)
  break;
 }
 printf("%s%s", result, partbch[x]);
}

void c2pc(void)
{
 char partcch[10][10]={"", "", "", "x"};
 int x=0;
 for (x=3; x<4; x++)
 {
  if (twvkmap[2]+twvkmap[x]==2)
  break;
 }
 printf("%s%s", result, partcch[x]);
}

void case3(void)
{
 if(twvkmap[0]==0)
 {
  printf("%s%s+%s",result,v2[0],v2[3]);
 }
 else
 if(twvkmap[1]==0)
 {
  printf("%s%s+%s",result,v2[0],v2[2]);
 }
 else
 if(twvkmap[2]==0)
 {
  printf("%s%s+%s",result,v2[1],v2[3]);
 }
 else
 if(twvkmap[3]==0)
 {
  printf("%s%s+%s",result,v2[1],v2[2]);
 }
}

void case4(void)
{
 printf("%s%d",result,1);
}

void case0(void)
{
 printf("\tFunction undefined.");
}