//WAP to sum of two number using pointer
#include<stdio.h>
int main()
{
	int a,b,*p,*q,s;
	p=&a;
	q=&b;
	printf("enter the two number\n");
	scanf("%d %d",&a,&b);
	s=*p+*q;
	printf("sum=%d",s);
	return 0;
}
