#include<stdio.h>
main()
{
	int a[5],i,sum=0;
	printf("enter array elements=\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		
	}
	printf("sum of elements=%d",sum);
	
	
	
	
	
}