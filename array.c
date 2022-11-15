#include<stdio.h>
void main()
{
int a[3]={1,2,3};
int b[10],i;
printf("enter values of array b");
for(i=0;i<10;i++)
{
b[i]=scanf("%d",&i);
}
printf("value in a[2] is %d\n",a[2]);
printf("value in array b\n");
for(i=0;i<10;i++)
printf("%d\n",b[i]);
}
