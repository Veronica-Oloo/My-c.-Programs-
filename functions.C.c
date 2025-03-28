//function to multuply two numbers. and add two numbers
#include<stdio.h>
int multiply (int x, int y){//function for multiplication of two numbers
  int product;
  product=x*y;
  return product;
}
int addition(int b, int c){//function ti perform addition
  int z;
  z= b + c;
  return z;}
int main()
{
  //declaring variables
  int a, b, product;
  int sum;
  printf("enter two numbers\n");
  scanf("%d%d",&a, &b);//prompting user to enter two numbers
  product=multiply(a,b);
  sum=addition(a,b);
  
  printf("the product is %d\n",product);//output product
  printf("the sum is %d\n",sum);//output sum
}