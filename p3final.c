#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("Enter n\n");
  scanf("%d",n);
  printf("Enter r\n");
  scanf("%d",r);
  
}
int ncr(int n,int r)
{
  int result;
  int n1=1;
  int n2=1;
  for(int i=n;i>r;i--)
    {
      n1=n1*i;
    }
  for(int j=n-r;j>1;j--)
    {
      n2=n2*j;
    }
  result=n1/n2;
  return result;
}
void output(int n,int r,int result)
{
  if(r>n)
  {
    printf("Invalid value\n");
  }
  if(n>r)
  printf("%d c %d is %d",n,r,result);
}
int main()
{
  int x,y,z;
  input_n_and_r(&x,&y);
  z=ncr(x,y);
  output(x,y,z);
  return 0;
}