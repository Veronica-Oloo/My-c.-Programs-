//program to find the area of rectangle
//Adm: D33-2471-2023
#include<stdio.h>
int main() {
  int length=0;
  int width=0;
  printf("length:\n");
  scanf("%d",&length);//input length
  printf("width:\n");
  scanf("%d",&width);//input width
  int area= length *width;
  printf("area:%d\n",area);// output the area based on the formula A=L*W 
  return 0;
}
