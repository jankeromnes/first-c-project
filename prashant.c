#include<stdio.h>

Int main ()
{
  Int n,r=0,rev=0;
  print("enter no");
  scanf("%d",&n);
  while(n>0)
  {
    r=n℅10;
    n=n/10;
    rev=rev*10+r;
  }
  printf("%d",rev);
  return 0;
}
