#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a,int b)
{
  
  int t=1;
    while (b!=0)
      {
        t = b;
        b = a%b;
        a = t;
        } 
    return a;
}
int input_n()
{
  int n;
  printf("Enter the number of fractions\n");
  scanf("%d",&n);
  return n;
}

Fraction input_fraction()
{
  Fraction a;
  printf("Enter a fraction\n");
  scanf("%d%d",&a.num,&a.den);
  return a;
}
void input_n_fractions(int n,Fraction f[n])
{
  for (int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
  Fraction sum;
  int z;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  z=find_gcd(sum.num,sum.den);
  sum.num=sum.num/z;
  sum.den=sum.den/z;
  return sum;
  
}
Fraction add_n_fractions(int n, Fraction f[n])
{
  Fraction sum = f[0];
  for (int i=1;i<n;i++)
    {
      sum=add_fractions(sum,f[i]);
    }
  return sum;
}
void output(int n,Fraction f[n],Fraction sum)
{
  for(int i=0;i<n-1;i++ )
    {
      printf("%d/%d + ",f[i].num,f[i].den);
    }
  printf("%d/%d = %d/%d",f[n-1].num,f[n-1].den,sum.num,sum.den);}
int main()
{ int x;
  x=input_n();
  Fraction f[x],sum1;
  input_n_fractions(x,f);
  sum1=add_n_fractions(x,f);
  output(x,f,sum1);
  return 0;
}

