#include<stdio.h>

int main()
{
while(1){
   int n,f=0;
    printf("any positive number :");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
    if(n%2==0){
    printf("\t not prime\n\n");
    f++;
    break;}}
    
    if(f==0){printf("\t primre\n\n");}}
    return 0;
}