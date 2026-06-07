// Sum of array using pointer
#include<stdio.h>
int main()
{
	int a[5],i,*p,s;
	printf("enter the array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<5;i++)
	{
		s=s+(*p);
		p++;
	}
	printf("sum=%d",s);
	return 0;
}
