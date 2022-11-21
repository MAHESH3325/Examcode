#include <stdio.h>
#include <math.h>
int main(){
  int a;
  scanf("%d",&a);
  int s=0;
  int i=0;
  while(a>0){
    int m=a%3;
    int j=pow(10,i);
    s=s+(m*j);
    a=a/3;
    i=i+1;
  }
  printf("%d",s);
         }
