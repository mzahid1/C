#include<conio.h>
#include<stdio.h>
void cases(void);
void case0(void);
void case1(void);
void case6(void);
void c6vc(void);
void c6hc(void);
void c6pa(void);
void c6pb(void);
void c6pc(void);
void c6pd(void);
void c6pe(void);
void c6pf(void);
void case7(void);
void case8(void);
int thvkmap[8];
char v3[6][6]={"x","x'","y","y'","z","z'"};
char m3v[8][6]={"x'y'z'","x'y'z","x'yz","x'yz'","xy'z'","xy'z","xyz","xyz'"};
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
  if(y==0)
  case0();
  if(y==1)
  case1();
  if(y==6)
  case6();
  if(y==7)
  case7();
  if(y==8)
  case8();
}

void case0(void)
{
 printf("Function undefined.");
}

void case1(void)
{
 int x=0;
 for(x=0; x<8; x++)
  {
   if (thvkmap[x]==1)
   break;
  }
   printf("%s%s",result,m3v[x]);
}

void case6(void)
{
 int x=0;
 int y=0;

 for(x=0; x<4; x++)
 {
  if(thvkmap[x]+thvkmap[y+4]==0)
  {
   c6vc();
  }
  y++;
 }

 y=0;
 for(x=0; x<8; x++)
 {
  if(thvkmap[x]+thvkmap[y++]==0)
  {
   c6hc();
  }
 }

 for(x=2; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[x]==0)
  {
   c6pa();
  }
 }

 for(x=3; x<4; x++)
 {
  if(thvkmap[1]+thvkmap[x]==0)
  {
   c6pb();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[x]==0)
  {
   c6pc();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[x]==0)
  {
   c6pd();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[4]+thvkmap[x]==0)
  {
   c6pe();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[5]+thvkmap[x]==0)
  {
   c6pf();
  }
 }
}

void c6vc(void)
{
 char verticalch[20][20]={"y+z","y+z'","y'+z'","y'+z"};
 int x=0;
 int y=0;
 for(x=0; x<4; x++)
 {
  if(thvkmap[x]+thvkmap[y+4]==0)
  break;
  y++;
 }
  printf("%s%s",result,verticalch[x]);
}

void c6hc(void)
{
 char horizonch[20][20]={"x+y","x+z'","x+y'","x'y'+xy+z","x'+y","x'+z'","x'+y'"};
 int x=0;
 int y=0;

 for(x=0; x<8; x++)
 {
  if(thvkmap[x]+thvkmap[y++]==0)
  break;
 }
  printf("%s%s",result,horizonch[x]);
}

void c6pa(void)
{
 char partach[20][20]={"","","x+y'z+yz'","x+z","","y+x'z+xz'","xz+xy'+yz'","z+x'y+xy'"};
 int x=0;
 for(x=2; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partach[x]);
}

void c6pb(void)
{
 char partbch[20][20]={"","","","x+y'z'+yz","y+x'z'+xz","","z'+x'y+xy'","x'y+y'z'+xz"};
 int x=0;
 for(x=3; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partbch[x]);
}

void c6pc(void)
{
 char partcch[20][20]={"","","","","x'y'+xy+x'z'","z'+x'y'+xy","","y'+x'z'+xz"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partcch[x]);
}

void c6pd(void)
{
 char partdch[20][20]={"","","","","","xy+y'z'+x'z","y'+x'z+xz'",""};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partdch[x]);
}

void c6pe(void)
{
 char partech[20][20]={"","","","","","","x'+y'z+yz'","x'+z"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[4]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partech[x]);
}

void c6pf(void)
{
 char partfch[20][20]={"","","","","","","","x'+y'z'+yz"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[5]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partfch[x]);
}

void case7(void)
{
 int breakleft[8];
 int breakright[8];
 char brokenleft[20][20]={"xy'+y'z","xy'+y'z'","","","x'y'+y'z","x'y'+y'z'","",""};
 char brokenright[20][20]={"","","xy+yz","xy+yz'","","","x'y+yz","x'y+yz'"};
 int x=0;
 int a=0;
 int b=0;
 int c=0;
 int d=0;
 int e=0;
 int f=0;

 for(x=0; x<2; x++)
  {
  a+=thvkmap[x];
  }
 for (x=4; x<6; x++)
 {
  b+=thvkmap[x];
 }
 if(a+b<4)
 {
  for(x=2; x<4; x++)
   {
   c+=thvkmap[x];
   }
  for (x=6; x<8; x++)
  {
   d+=thvkmap[x];
  }
  if(c+d==4)
  {
   for(x=0; x<8; x++)
   {
    breakleft[x]=thvkmap[x];
   }
   for(x=0; x<8; x++)
   {
    if(breakleft[x]==0)
    break;
   }
   printf("%s%s+%s",result,brokenleft[x],v3[2]);
  }
 }
 else
 if(a+b==4)
 {
  for(x=0; x<8; x++)
   {
    breakright[x]=thvkmap[x];
   }
  for(x=0; x<2; x++)
   {
    e+=thvkmap[x];
   }
  for (x=4; x<6; x++)
   {
    f+=thvkmap[x];
   }
  if(e+f==4)
   {
    for(x=0; x<8; x++)
    {
     if(breakright[x]==0)
     break;
    }
     printf("%s%s+%s",result,brokenright[x],v3[3]);
   }
 }
}

void case8(void)
{
 printf("%s%d",result,1);
}