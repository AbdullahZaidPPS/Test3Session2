#include <stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter numerator 1 and denominator 1\n");
  scanf("%d%d",num1,den1);
  printf("Enter the numerator 2 and denominator 2\n");
  scanf("%d%d",num2,den2);
}
void add(int num1,int den1, int num2,int den2,int *num3,int *den3)
{
  
  *num3=(num1*den2)+(num2*den1);
  *den3=(den1*den2);
  int x=*den3,y=*num3,z=1;
  while(y!=0)
    {
      z=y;
      y=x%y;
      x=z;
    }
  *den3=*den3/x;
  *num3=*num3/x;
}
void output(int num1,int den1, int num2, int den2, int num3,int den3)
{
  printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
int a,b,c,d,e,f;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&e,&f);
  output(a,b,c,d,e,f);
  return 0;
}
