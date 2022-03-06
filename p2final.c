#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction a;
  printf("enter numerator\n");
  scanf("%d",&a.num);
  printf("Enter denominator\n");
  scanf("%d",&a.den);
  return a;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  Fraction largest;
  if(f1.num*f2.den<f2.num*f1.den && f1.num*f3.den<f3.num*f1.den)
  {
    largest=f1;
  }
  else if(f2.num*f1.den<f1.num*f2.den&&f2.num*f3.den<f3.num*f2.den)
  {
    largest=f2;
  }
  else 
  {
    largest=f3;
  }
  return largest;
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
  printf("The smallest fraction is %d/%d",largest.num,largest.den);
  }
int main()
{
  Fraction x,y,z,smallest;
  x=input_fraction();
  y=input_fraction();
  z=input_fraction();
  smallest=Largest_fraction(x,y,z);
  output(x,y,z,smallest);
  return 0;
}
  

