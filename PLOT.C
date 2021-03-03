#include<conio.h>
#include<stdio.h>
#define HEIGHT 5
#define WIDTH 10

void main(void)
{
 char matrix[HEIGHT][WIDTH];
 int x,y;
 clrscr();
 for(y=0; y<HEIGHT; y++)
  for(x=0; x<WIDTH; x++)
   matrix[y][x]='.';
 printf("Enter coordinates in form x,y (4,2).\n");
 printf("Use negative numbers to quit.\n");
 getch();
 while(x>=0)
  {
  for(y=0; y<HEIGHT;y++)
   {
    for(x=0; x<WIDTH; y++)
     printf("%c", matrix[y][x]);
    printf("\n\n");
   }
  printf("Coordinates: ");
  scanf("%d %d",&x,&y);
  matrix[y][x]='\xB1';
  }
}