#include<stdio.h>
int myFunction(int x,int y)
{
return x+y;
}
int main(){
int a,b;
printf("enter 2 numbers : ");
scanf("%d%d",&a,&b);
int result = myFunction(a,b);
printf("result is = %d\n",result);
return 0;
}
