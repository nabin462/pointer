// largest element of array using pointer
#include<stdio.h>
int main()
{
	int a[5],*p,i,largest;
	printf("enter the array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	largest=a[0];
	for(i=0;i<5;i++)
	{
		if(largest<(*p))
		largest=(*p);
		p++;
	}
	printf("largest=%d",largest);
	return 0;
}
