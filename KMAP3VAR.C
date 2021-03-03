#include<conio.h>
#include<stdio.h>
void cases(void); void case0(void); void case1(void); void case2(void);
void c2pa(void); void c2pb(void); void c2pc(void); void c2pd(void);
void c2pe(void); void c2pf(void); void c2pg(void);
void case3(void);
void c3pa(void); void c3pb(void); void c3pc(void); void c3pd(void);
void c3pe(void); void c3pf(void); void c3pg(void); void c3ph(void);
void c3pi(void); void c3pj(void); void c3pk(void); void c3pl(void);
void c3pm(void); void c3pn(void); void c3po(void); void c3pp(void);
void c3pq(void); void c3pr(void); void c3ps(void); void c3pt(void);
void case4(void);
void c4p1(void); void c4p2(void); void c4p3(void); void c4p4(void);
void c4p5(void); void c4p6(void); void c4p7(void); void c4p8(void);
void c4p9(void); void c4p10(void); void c4p11(void); void c4p12(void);
void c4p13(void); void c4p14(void); void c4p15(void); void c4p16(void);
void c4p17(void); void c4p18(void); void c4p19(void); void c4p20(void);
void c4p21(void); void c4p22(void); void c4p23(void); void c4p24(void);
void c4p25(void); void c4p26(void); void c4p27(void); void c4p28(void);
void c4p29(void); void c4p30(void);
void case5(void);
void c5pa(void); void c5pb(void); void c5pc(void); void c5pd(void);
void c5pe(void); void c5pf(void); void c5pg(void); void c5ph(void);
void c5pi(void); void c5pj(void); void c5pk(void); void c5pl(void);
void c5pm(void); void c5pn(void); void c5po(void); void c5pp(void);
void c5pq(void); void c5pr(void); void c5ps(void); void c5pt(void);
void case6(void);
void c6pa(void); void c6pb(void); void c6pc(void); void c6pd(void);
void c6pe(void); void c6pf(void); void c6pg(void);
void case7(void); void case8(void);
int thvkmap[8];
char v3[6][6]={"x","x'","y","y'","z","z'"};
char m3v[8][6]={"x'y'z'","x'y'z","x'yz","x'yz'","xy'z'","xy'z","xyz","xyz'"};
char result[35]={"The required SOP expression is\n\t"};

void main(void)
{
 int n=0;
 clrscr();
 printf("\nThree-variable k-map:\n");
 do
 {
  printf("\n\nEnter either 0 or 1 for the specified minterms:\n");
   for(n=0; n<8; n++)
   {
    printf("m%d = ",n);
    scanf("%d",&thvkmap[n]);
   }
   cases();
 }
 while((thvkmap[0]+thvkmap[1]+thvkmap[2]+thvkmap[3]+thvkmap[4]+thvkmap[5]+thvkmap[6]+thvkmap[7])<9);
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
  if(y==2)
  case2();
  if(y==3)
  case3();
  if(y==4)
  case4();
  if(y==5)
  case5();
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

void case2(void)
{
 int x=0;

 for(x=1; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[x]==2)
  {
   c2pa();
  }
 }

 for(x=2; x<4; x++)
 {
  if(thvkmap[1]+thvkmap[x]==2)
  {
   c2pb();
  }
 }

 for(x=3; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[x]==2)
  {
   c2pc();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[x]==2)
  {
   c2pd();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[4]+thvkmap[x]==2)
  {
   c2pe();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[5]+thvkmap[x]==2)
  {
   c2pf();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[6]+thvkmap[x]==2)
  {
   c2pg();
  }
 }
}

void c2pa(void)
{
 char partach[20][20]={"", "x'y'", "x'y'z'+x'yz", "x'z'", "y'z'", "x'y'z'+xy'z", "x'y'z'+xyz", "x'y'z'+xyz'"};
 int x=0;
 for(x=1; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[x]==2)
     break;
    }
     printf("%s%s",result,partach[x]);
}

void c2pb(void)
{
 char partbch[20][20]={"", "", "x'z", "x'y'z+x'yz'", "x'y'z+xy'z'", "y'z", "x'y'z+xyz", "x'y'z+xyz'"};
 int x=0;
 for(x=2; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[x]==2)
     break;
    }
     printf("%s%s",result,partbch[x]);
}

void c2pc(void)
{
 char partcch[20][20]={"", "", "", "x'y", "x'yz+xy'z'", "x'yz+xy'z", "yz", "x'yz+xyz'"};
 int x=0;
 for(x=3; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[x]==2)
     break;
    }
     printf("%s%s",result,partcch[x]);
}

void c2pd(void)
{
 char partdch[20][20]={"","","","", "x'yz'+xy'z'", "x'yz'+xy'z", "x'yz'+xyz", "yz'"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[x]==2)
     break;
    }
     printf("%s%s",result,partdch[x]);
}

void c2pe(void)
{
 char partech[20][20]={"", "", "", "", "", "xy'", "xy'z'+xyz", "xz'"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[4]+thvkmap[x]==2)
     break;
    }
     printf("%s%s",result,partech[x]);
}

void c2pf(void)
{
 char partfch[20][20]={"", "", "", "", "", "", "xz", "xy'z+xyz'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[5]+thvkmap[x]==2)
     break;
    }
     printf("%s%s",result,partfch[x]);
}

void c2pg(void)
{
 char partfch[20][20]={"", "", "", "", "", "", "", "xy"};
 int x=0;
 for(x=7; x<8; x++)
    {
    if(thvkmap[6]+thvkmap[x]==2)
     break;
    }
     printf("%s%s",result,partfch[x]);
}

void case3(void)
{
 int x=0;

 for(x=2; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[x]==3)
  {
    c3pa();
  }
 }

 for(x=3; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[2]+thvkmap[x]==3)
  {
    c3pb();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[3]+thvkmap[x]==3)
  {
    c3pc();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[4]+thvkmap[x]==3)
  {
    c3pd();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[4]+thvkmap[5]+thvkmap[x]==3)
  {
    c3pe();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[5]+thvkmap[6]+thvkmap[x]==3)
  {
    c3pf();
  }
 }

 for(x=3; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[2]+thvkmap[x]==3)
  {
    c3pg();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[3]+thvkmap[x]==3)
  {
    c3ph();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[4]+thvkmap[x]==3)
  {
    c3pi();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[5]+thvkmap[x]==3)
  {
    c3pj();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[4]+thvkmap[6]+thvkmap[x]==3)
  {
    c3pk();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[3]+thvkmap[x]==3)
  {
    c3pl();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[4]+thvkmap[x]==3)
  {
    c3pm();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[5]+thvkmap[x]==3)
  {
    c3pn();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[6]+thvkmap[x]==3)
  {
    c3po();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[4]+thvkmap[x]==3)
  {
    c3pp();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[4]+thvkmap[x]==3)
  {
    c3pq();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[6]+thvkmap[x]==3)
  {
    c3pr();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[5]+thvkmap[x]==3)
  {
    c3ps();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[6]+thvkmap[x]==3)
  {
    c3pt();
  }
 }
}

void c3pa(void)
{
 char partach[20][20]={"", "", "x'y'+x'z'", "x'y'+x'z", "x'y'+y'z'", "x'y'+y'z", "x'y'+xyz'", "x'y'+xyz"};
 int x=0;
 for(x=2; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partach[x]);
}

void c3pb(void)
{
 char partbch[20][20]={"", "", "", "x'z+x'y", "x'y'z+x'yz'+xy'z'", "y'z+x'yz'", "x'y'z+yz'", "x'y'z+x'yz'+xyz"};
 int x=0;
 for(x=3; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[2]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partbch[x]);
}

void c3pc(void)
{
 char partcch[20][20]={"", "", "", "", "x'y+xy'z'", "x'y+xy'z", "x'y+yz'", "x'y+yz"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[3]+thvkmap[x]==3)
     break;
    }

     printf("%s%s",result,partcch[x]);
}

void c3pd(void)
{
 char partdch[20][20]={"", "", "", "", "", "x'yz+xy'", "x'yz+xz'", "yz+xy'z"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[4]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partdch[x]);
}

void c3pe(void)
{
 char partech[20][20]={"", "", "", "", "", "", "xy'+xz'", "xy'+xz"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[4]+thvkmap[5]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partech[x]);
}

void c3pf(void)
{
 char partfch[20][20]={"", "", "", "", "", "", "", "xz+xy"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[5]+thvkmap[6]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partfch[x]);
}

void c3pg(void)
{
 char partgch[20][20]={"", "", "", "x'z'+x'y", "x'z'+y'z'", "x'z'+xy'z", "x'z'+yz'", "x'z'+xyz"};
 int x=0;
 for(x=3; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[2]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partgch[x]);
}

void c3ph(void)
{
 char parthch[20][20]={"", "", "", "", "x'z+xy'z'", "y'z+x'z", "x'z+xyz'", "x'z+yz"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[3]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,parthch[x]);
}

void c3pi(void)
{
 char partich[20][20]={"", "", "", "", "", "x'yz'+xy'", "yz'+xz'", "x'yz'+xy'z'+xyz"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[4]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partich[x]);
}

void c3pj(void)
{
 char partjch[20][20]={"", "", "", "", "", "", "x'yz+xy'z+xyz'", "yz+xz"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[5]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partjch[x]);
}

void c3pk(void)
{
 char partkch[20][20]={"", "", "", "", "", "", "", "xz'+xy"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[4]+thvkmap[6]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partkch[x]);
}

void c3pl(void)
{
 char partlch[20][20]={"", "", "", "", "y'z'+x'yz", "x'y'z'+x'yz+xy'z", "x'y'z'+x'yz+xyz'", "x'y'z'+yz"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[3]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partlch[x]);
}

void c3pm(void)
{
 char partmch[20][20]={"", "", "", "", "", "y'z+x'y'", "x'y'z+xz'", "x'y'z+xy'z'+xyz"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[4]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partmch[x]);
}

void c3pn(void)
{
 char partnch[20][20]={"", "", "", "", "", "", "yz'+xy'z", "x'yz'+xz"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[5]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partnch[x]);
}

void c3po(void)
{
 char partoch[20][20]={"", "", "", "", "", "", "", "yz+xy"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[6]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partoch[x]);
}

void c3pp(void)
{
 char partpch[20][20]={"", "", "", "", "", "y'z'+xy'", "y'z'+xz'", "y'z'+xyz"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[4]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partpch[x]);
}

void c3pq(void)
{
 char partqch[20][20]={"", "", "", "", "", "y'z+xy'", "x'y'z+xz'", "x'y'z+xy'z'+xyz"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[4]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partqch[x]);
}

void c3pr(void)
{
 char partrch[20][20]={"", "", "", "", "", "", "", "yz'+xy"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[6]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partrch[x]);
}

void c3ps(void)
{
 char partsch[20][20]={"", "", "", "", "", "", "x'y'z'+xy'z+xyz'", "x'y'z'+xz"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[5]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,partsch[x]);
}

void c3pt(void)
{
 char parttch[20][20]={"", "", "", "", "", "", "", "x'y'z+xy"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[6]+thvkmap[x]==3)
     break;
    }
     printf("%s%s",result,parttch[x]);
}

void case4(void)
{
 int x=0;

 for(x=3; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[2]+thvkmap[x]==4)
  {
    c4p1();
  }
 }
  for(x=4; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[2]+thvkmap[3]+thvkmap[x]==4)
  {
    c4p2();
  }
 }
  for(x=5; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[3]+thvkmap[4]+thvkmap[x]==4)
  {
    c4p3();
  }
 }
  for(x=6; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
  {
    c4p4();
  }
 }
 for(x=7; x<8; x++)
 {
  if(thvkmap[4]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p5();
  }
 }
  for(x=4; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[2]+thvkmap[3]+thvkmap[x]==4)
  {
    c4p6();
  }
 }
  for(x=5; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[3]+thvkmap[4]+thvkmap[x]==4)
  {
    c4p7();
  }
 }
  for(x=6; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
  {
    c4p8();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p9();
  }
 }
  for(x=5; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[3]+thvkmap[4]+thvkmap[x]==4)
  {
    c4p10();
  }
 }
 for(x=6; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
  {
    c4p11();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p12();
  }
 }
  for(x=6; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
  {
    c4p13();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p14();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p15();
  }
 }
 for(x=4; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[3]+thvkmap[x]==4)
  {
    c4p16();
  }
 }
 for(x=5; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[2]+thvkmap[4]+thvkmap[x]==4)
  {
    c4p17();
  }
 }
 for(x=6; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[3]+thvkmap[5]+thvkmap[x]==4)
  {
    c4p18();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[4]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p19();
  }
 }
 for(x=5; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[4]+thvkmap[x]==4)
  {
    c4p20();
  }
 }
  for(x=6; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[2]+thvkmap[5]+thvkmap[x]==4)
  {
    c4p21();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[3]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p22();
  }
 }
  for(x=6; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[5]+thvkmap[x]==4)
  {
    c4p23();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[2]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p24();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[6]+thvkmap[x]==4)
  {
    c4p25();
  }
 }
 for(x=4; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[2]+thvkmap[x]==4)
  {
    c4p26();
  }
 }
  for(x=5; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[2]+thvkmap[3]+thvkmap[x]==4)
  {
    c4p27();
  }
 }
  for(x=6; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[3]+thvkmap[4]+thvkmap[x]==4)
  {
    c4p28();
  }
 }
  for(x=7; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
  {
    c4p29();
  }
 }
  for(x=5; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[2]+thvkmap[x]==4)
  {
    c4p30();
  }
 }
}

void c4p1(void)
{
 char part1ch[30][30]={"", "", "", "x'", "x'y'+x'z'+y'z'", "x'z'+y'z", "x'y'+yz'", "x'y'+x'z'+xyz"};
 int x=0;
 for(x=3; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[2]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part1ch[x]);
}

void c4p2(void)
{
 char part2ch[30][30]={"", "", "", "", "x'z+x'y+xy'z'", "x'y+y'z", "x'z+yz'", "x'z+x'y+yz"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[2]+thvkmap[3]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part2ch[x]);
}

void c4p3(void)
{
 char part3ch[30][30]={"", "", "", "", "", "x'y+xy'", "x'y+xz'", "x'y+yz+xy'z'"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[3]+thvkmap[4]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part3ch[x]);
}

void c4p4(void)
{
 char part4ch[30][30]={"", "", "", "", "", "", "x'yz+xz'+xy'", "xy'+yz"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part4ch[x]);
}

void c4p5(void)
{
 char part5ch[30][30]={"", "", "", "", "", "", "", "x"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[4]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part5ch[x]);
}

void c4p6(void)
{
 char part6ch[30][30]={"", "", "", "", "x'y+yz'", "x'z'+x'y+xy'z", "x'z'+x'y+yz'", "x'z'+yz"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[2]+thvkmap[3]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part6ch[x]);
}

void c4p7(void)
{
 char part7ch[30][30]={"", "", "", "", "", "x'z+xy'", "x'z+yz", "x'z+xy'"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[3]+thvkmap[4]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part7ch[x]);
}

void c4p8(void)
{
 char part8ch[30][30]={"", "", "", "", "", "", "xy'+yz'", "xy'+xz+x'yz'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part8ch[x]);
}

void c4p9(void)
{
 char part9ch[30][30]={"", "", "", "", "", "", "", "xz+xy+yz"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part9ch[x]);
}

void c4p10(void)
{
 char part10ch[30][30]={"", "", "", "", "", "xy'+y'z'+x'yz", "xz'+y'z'+x'yz", "y'z'+yz"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[3]+thvkmap[4]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part10ch[x]);
}

void c4p11(void)
{
 char part11ch[30][30]={"", "", "", "", "", "", "xz'+y'z", "xy'+xz+y'z"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part11ch[x]);
}

void c4p12(void)
{
 char part12ch[30][30]={"", "", "", "", "", "", "", "xz+yz'"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part12ch[x]);
}

void c4p13(void)
{
 char part13ch[30][30]={"", "", "", "", "", "", "xz'+xy'+y'z'", "xz+y'z'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part13ch[x]);
}

void c4p14(void)
{
 char part14ch[30][30]={"", "", "", "", "", "", "", "xy+y'z"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part14ch[x]);
}

void c4p15(void)
{
 char part15ch[30][30]={"", "", "", "", "", "", "", "xz+xy+x'y'z'"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[5]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part15ch[x]);
}

void c4p16(void)
{
 char part16ch[30][30]={"", "", "", "", "x'z+y'z'", "x'y'+x'z+y'z", "x'y'+x'z+xyz'", "x'y'+yz"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[3]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part16ch[x]);
}

void c4p17(void)
{
 char part17ch[30][30]={"", "", "", "", "", "xy'+y'z+x'yz'", "x'z'+yz'+x'y'z", "x'y'z+x'yz'+xy'z'+xyz"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[2]+thvkmap[4]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part17ch[x]);
}

void c4p18(void)
{
 char part18ch[30][30]={"", "", "", "", "", "", "x'y+yz'+xy'z", "x'y+xz"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[3]+thvkmap[5]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part18ch[x]);
}

void c4p19(void)
{
 char part19ch[30][30]={"", "", "", "", "", "", "", "xz'+xy+yz"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[4]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part19ch[x]);
}

void c4p20(void)
{
 char part20ch[30][30]={"", "", "", "", "", "y'", "x'y'+xz'", "x'y'+y'z'+xyz"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[4]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part20ch[x]);
}

void c4p21(void)
{
 char part21ch[30][30]={"", "", "", "", "", "", "y'z+yz'", "xz+y'z+x'yz'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[2]+thvkmap[5]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part21ch[x]);
}

void c4p22(void)
{
 char part22ch[30][30]={"", "", "", "", "", "", "", "y"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[3]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part22ch[x]);
}

void c4p23(void)
{
 char part23ch[30][30]={"", "", "", "", "", "", "x'y'+y'z+xyz'", "x'y'+xz"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[5]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part23ch[x]);
}

void c4p24(void)
{
 char part24ch[30][30]={"", "", "", "", "", "", "", "xy+yz'+x'y'z"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[2]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part24ch[x]);
}

void c4p25(void)
{
 char part25ch[30][30]={"", "", "", "", "", "", "", "x'y'+xy"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[6]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part25ch[x]);
}

void c4p26(void)
{
 char part26ch[30][30]={"", "", "", "", "x'z'+x'y'+y'z'", "x'z'+y'z", "x'y'+yz'", "x'y'+x'z'+xyz"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[2]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part26ch[x]);
}

void c4p27(void)
{
 char part27ch[30][30]={"", "", "", "", "", "x'z+x'y+y'z", "x'z+yz'", "x'z+x'y+yz"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[2]+thvkmap[3]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part27ch[x]);
}

void c4p28(void)
{
 char part28ch[30][30]={"", "", "", "", "", "", "x'y+xz'", "x'y+yz+xy'z'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[3]+thvkmap[4]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part28ch[x]);
}

void c4p29(void)
{
 char part29ch[30][30]={"", "", "", "", "", "", "", "xy'+yz"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[4]+thvkmap[5]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part29ch[x]);
}

void c4p30(void)
{
 char part30ch[30][30]={"", "", "", "", "", "x'z'+y'z", "x'y'+yz'", "x'y'+x'z'+x'y'z'"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[2]+thvkmap[x]==4)
     break;
    }
     printf("%s%s",result,part30ch[x]);
}

void case5(void)
{
 int x=0;

 for(x=2; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[1]+thvkmap[x]==0)
  {
    c5pa();
  }
 }

 for(x=3; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[2]+thvkmap[x]==0)
  {
    c5pb();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[3]+thvkmap[x]==0)
  {
    c5pc();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[4]+thvkmap[x]==0)
  {
    c5pd();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[4]+thvkmap[5]+thvkmap[x]==0)
  {
    c5pe();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[5]+thvkmap[6]+thvkmap[x]==0)
  {
    c5pf();
  }
 }

 for(x=3; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[2]+thvkmap[x]==0)
  {
    c5pg();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[3]+thvkmap[x]==0)
  {
    c5ph();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[4]+thvkmap[x]==0)
  {
    c5pi();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[5]+thvkmap[x]==0)
  {
    c5pj();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[4]+thvkmap[6]+thvkmap[x]==0)
  {
    c5pk();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[3]+thvkmap[x]==0)
  {
    c5pl();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[4]+thvkmap[x]==0)
  {
    c5pm();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[5]+thvkmap[x]==0)
  {
    c5pn();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[6]+thvkmap[x]==0)
  {
    c5po();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[4]+thvkmap[x]==0)
  {
    c5pp();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[1]+thvkmap[4]+thvkmap[x]==0)
  {
    c5pq();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[6]+thvkmap[x]==0)
  {
    c5pr();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[5]+thvkmap[x]==0)
  {
    c5ps();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[6]+thvkmap[x]==0)
  {
    c5pt();
  }
 }
}

void c5pa(void)
{
 char partach[30][30]={"", "", "x+yz", "x+yz'", "y+x'z", "y+x'z'", "x'y+xy'+xz", "x'y+xy'+xz'"};
 int x=0;
 for(x=2; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[1]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partach[x]);
}

void c5pb(void)
{
 char partbch[30][30]={"", "", "", "x+y'z'", "x'y'z'+yz+x'z+x'y", "y'z'+yz+xy", "y'z'+yz+xz", "y'z'+x'yz+xy'+xz'"};
 int x=0;
 for(x=3; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[2]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partbch[x]);
}

void c5pc(void)
{
 char partcch[30][30]={"", "", "", "", "x'y'+xz+xy", "x'y'+xz'+xy", "y'+xz", "y'+xz'"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[3]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partcch[x]);
}

void c5pd(void)
{
 char partdch[30][30]={"", "", "", "", "", "x'y'+yz'+xy", "x'y'+x'z'+xz", "x'y'+yz'+xy'z"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[4]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partdch[x]);
}

void c5pe(void)
{
 char partech[30][30]={"", "", "", "", "", "", "x'+yz", "x'+yz'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[4]+thvkmap[5]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partech[x]);
}

void c5pf(void)
{
 char partfch[30][30]={"", "", "", "", "", "", "", "x'+y'z'"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[5]+thvkmap[6]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partfch[x]);
}

void c5pg(void)
{
 char partgch[30][30]={"", "", "", "x+y'z", "z+xy", "x'z+xz'+xy", "z+xy'", "x'z+y'z+xz'"};
 int x=0;
 for(x=3; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[2]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partgch[x]);
}

void c5ph(void)
{
 char parthch[30][30]={"", "", "", "", "x'z'+xz+xy", "z'+xy", "x'z'+xy'+xz", "z'+xy'"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[3]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,parthch[x]);
}

void c5pi(void)
{
 char partich[30][30]={"", "", "", "", "", "x'y'+x'z+xy", "z+x'y'", "x'y'+x'z+y'z+xyz'"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[4]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partich[x]);
}

void c5pj(void)
{
 char partjch[30][30]={"", "", "", "", "", "", "x'y'+x'z'+y'z'+xyz", "z'+x'y'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[5]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partjch[x]);
}

void c5pk(void)
{
 char partkch[30][30]={"", "", "", "", "", "", "", "x'+y'z"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[4]+thvkmap[6]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partkch[x]);
}

void c5pl(void)
{
 char partlch[30][30]={"", "", "", "", "y'z+yz'+xz", "x'y'z+yz'+xz'+xy", "y'z+x'yz'+xy'+xz", "y'z+yz'+xy'"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[3]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partlch[x]);
}

void c5pm(void)
{
 char partmch[30][30]={"", "", "", "", "", "y+x'z'", "x'z'+x'y+xz", "x'z'+x'y+xy'z+yz'"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[4]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partmch[x]);
}

void c5pn(void)
{
 char partnch[30][30]={"", "", "", "", "", "", "y'z'+x'z+yz", "x'y'+x'z+xz'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[5]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partnch[x]);
}

void c5po(void)
{
 char partoch[30][30]={"", "", "", "", "", "", "", "y'+x'z'"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[6]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partoch[x]);
}

void c5pp(void)
{
 char partpch[30][30]={"", "", "", "", "", "y+x'z", "z+x'y", "x'z+x'y+y'z+yz'"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[4]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partpch[x]);
}

void c5pq(void)
{
 char partqch[30][30]={"", "", "", "", "", "y+x'z'", "x'z'+x'y+xz", "x'z'+x'y+xy'z+yz'"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[4]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partqch[x]);
}

void c5pr(void)
{
 char partrch[30][30]={"", "", "", "", "", "", "", "y'+x'z"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[6]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partrch[x]);
}

void c5ps(void)
{
 char partsch[30][30]={"", "", "", "", "", "", "x'z+x'y+yz+xy'z'", "x'z+yz'+xz'"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[5]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partsch[x]);
}

void c5pt(void)
{
 char parttch[20][20]={"", "", "", "", "", "", "", "x'z'+x'y+xy'"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[6]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,parttch[x]);
}


void case6(void)
{
 int x=0;

 for(x=1; x<8; x++)
 {
  if(thvkmap[0]+thvkmap[x]==0)
  {
   c6pa();
  }
 }

 for(x=2; x<4; x++)
 {
  if(thvkmap[1]+thvkmap[x]==0)
  {
   c6pb();
  }
 }

 for(x=3; x<8; x++)
 {
  if(thvkmap[2]+thvkmap[x]==0)
  {
   c6pc();
  }
 }

 for(x=4; x<8; x++)
 {
  if(thvkmap[3]+thvkmap[x]==0)
  {
   c6pd();
  }
 }

 for(x=5; x<8; x++)
 {
  if(thvkmap[4]+thvkmap[x]==0)
  {
   c6pe();
  }
 }

 for(x=6; x<8; x++)
 {
  if(thvkmap[5]+thvkmap[x]==0)
  {
   c6pf();
  }
 }

 for(x=7; x<8; x++)
 {
  if(thvkmap[6]+thvkmap[x]==0)
  {
   c6pg();
  }
 }
}

void c6pa(void)
{
 char partach[20][20]={"","x+y","x+y'z+yz'","x+z","y+z","y+x'z+xz'","xz+xy'+yz'","z+x'y+xy'"};
 int x=0;
 for(x=1; x<8; x++)
    {
     if(thvkmap[0]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partach[x]);
}

void c6pb(void)
{
 char partbch[20][20]={"","","x+z'","x+y'z'+yz","y+x'z'+xz","y+z'","z'+x'y+xy'","x'y+y'z'+xz"};
 int x=0;
 for(x=2; x<8; x++)
    {
     if(thvkmap[1]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partbch[x]);
}

void c6pc(void)
{
 char partcch[20][20]={"","","","x+y'","x'y'+xy+x'z'","z'+x'y'+xy","y'+z'","y'+x'z'+xz"};
 int x=0;
 for(x=3; x<8; x++)
    {
     if(thvkmap[2]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partcch[x]);
}

void c6pd(void)
{
 char partdch[20][20]={"","","","","x'y'+xy+z","xy+y'z'+x'z","y'+x'z+xz'","y'+z"};
 int x=0;
 for(x=4; x<8; x++)
    {
     if(thvkmap[3]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partdch[x]);
}

void c6pe(void)
{
 char partech[20][20]={"","","","","","x'+y","x'+y'z+yz'","x'+z"};
 int x=0;
 for(x=5; x<8; x++)
    {
     if(thvkmap[4]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partech[x]);
}

void c6pf(void)
{
 char partfch[20][20]={"","","","","","","x'+z'","x'+y'z'+yz"};
 int x=0;
 for(x=6; x<8; x++)
    {
     if(thvkmap[5]+thvkmap[x]==0)
     break;
    }
     printf("%s%s",result,partfch[x]);
}

void c6pg(void)
{
 char partfch[20][20]={"","","","","","","","x'+y'"};
 int x=0;
 for(x=7; x<8; x++)
    {
     if(thvkmap[6]+thvkmap[x]==0)
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