#include<stdio.h>
int main()
{
 int t1=0,t2=1,n3,i,number;
 printf("Enter the number of elements:");
 scanf("%d",&number);
 printf("\n%d %d",t1,t2);//printing 0 and 1
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed
 {
  n3=t1+t2;
  printf(" %d",n3);
  t1=t2;
  t2=n3;
 }
  return 0;
 }
