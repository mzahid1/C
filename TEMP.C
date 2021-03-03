#include<conio.h>
#include<stdio.h>
void main(void)
{
 int temp[7];
 int day=0;
 int sum=0;

 clrscr();

 for (day=0; day<7; day++)
 {
  printf("Enter temperature for day %d: ", day);
  scanf("%d", &temp[day]);
 }

 for (day=0; day<7; day++)
 {
  sum+=temp[day];
 }
 printf("Average temperature of the week is %d", sum/7);
 printf("\nTuesday's temperature was %d", temp[1]);

 getch();

}