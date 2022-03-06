#include<stdio.h>
int input_size()
{
  int n;
  printf("enter the size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{
  int i;
  int large=a[0];
  int l_index;
  for( i=1;i<n;i++)
    {
      if(large<a[i])
      {
        large=a[i];
        l_index=i;
      }
    }
  return l_index;
}
void out_put(int n,int a[n],int largest)
{
  printf("The index of the largest number is %d",largest);
}
int main()
{
  int x,y;
  x=input_size();
  int b[x];
  input_array(x,b);
  y=find_largest(x,b);
  out_put(x,b,y);
  return 0;
}