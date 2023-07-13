#include<stdio.h>
main()
{
	int a[5],i;
	printf("enter array elements=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\tarray elements=");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}