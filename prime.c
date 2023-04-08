#include<stdio.h>

int main()
{
   int n,f=0;
    printf("any positive number");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
    if(n%2==0){
    printf("not prime");
    f++;
    break;}}
    if(f==0){printf("primre");}
    return 0;
}