#include<stdio.h>
main()
{
	int a[5],i,sum=0,ave;
	printf("enter array elements=\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		
	}
	printf("sum of elements=%d\n",sum);
	ave=sum/5;
	printf("average of elements=%d",ave);
	
	
	
	
	
}