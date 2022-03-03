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
Fraction input_fraction()
{
  Fraction a;
  printf("Enter a fraction\n");
  scanf("%d%d",&a.num,&a.den);
  return a;
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
void output(Fraction f1,Fraction f2,Fraction sum)
{
  printf("%d/%d+%d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  Fraction fa,fb,sum1;
  fa=input_fraction();
  fb=input_fraction();
  sum1=add_fractions(fa,fb);
  output(fa,fb,sum1);
  return 0;
}



