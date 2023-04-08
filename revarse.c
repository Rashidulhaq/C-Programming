#include<stdio.h>

int main()
{
  int n=1567;
  for(;n/10!=0;){
 printf("%d",n%10);
   n=n/10;
}
    printf("%d",n);
    return 0;
}