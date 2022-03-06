#include<stdio.h>
int input_degree()
{
  int n;
  printf("Enter the degree of polynomial equation\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("enter the value of x\n");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n+1])
{
  printf("Enter the coefficients\n");
  for(int i=0;i<n+1;i++)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n,float a[n+1],float x)
{
  int z;
  int result=1;
  int i;
  z=x*(a[0]*x+a[1])+a[2];
  while( i=3)
    {
      result=result*(z*x+a[i]);
      break;
    }
  for (int i=4;i<n+1;i++)
    {
      result=result*x+a[i];
    }
  return result;
}
void out_put(int n,float a[n+1],float x,float result)
{
  printf("%f + %f*x +",a[n],a[n-1]);
  for(int i=n-2;i>0;i--)
    {
      printf("%f*x^%d +",a[i],n-i);
      }  
  printf("%f*x^%d at %f is %f",a[0],n,x,result);
}
int main()
{
  int a;
  float b,sum;
  a=input_degree();
  b=input_x();
  float c[a+1];
  input_coefficients(a,c);
  sum=evaluate_polynomial(a,c,b);
  out_put(a,c,b,sum);
    return 0;
}
  