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
int main()
{
  printf("%d\n",find_gcd(4,8));
  return 0;
}

