#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

int sum_numbers()
{
char a[26];
int n=0;
int i;
int *p;
int sum=0;
int rem;
int temp;
printf("enter the block size\n");
scanf("%d",&n);
p=(int*)malloc(sizeof(n)*2);
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
sum=sum+*(p+i);
}
printf("\ntotal sum %2d",sum);
temp=sum;
for(i=0;i<26;i++)
{
rem=temp%10;
temp=temp/10;
a[i]=65+i+rem; // ascii value 65-A
if(temp==0)
temp=sum;
}

printf("final string:%s",a);
return 0;
}
main()
{
char c;
printf("find the sum of numbers\n");
do{
sum_numbers();
printf("\npress 'y' to find another sum of numbers\n");
c=getch();
}while(c=='y');
return 0;
}
