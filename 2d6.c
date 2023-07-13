#include<stdio.h>
main()
{

	int a[3][3],i,j,n,n1,sc;

	printf("how many rows=");
	scanf("%d",&n);
	printf("how many columns=");
	scanf("%d",&n1);
	printf("enter array elements=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);

		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{				
			printf("%d\n",a[i][j]);

		}
    }
    for(i=0;i<n;i++)
	{
		sc=0;
		for(j=0;j<n1;j++)
		{
			
			sc=sc+a[j][i];
		}
		printf("sc=%d ",sc);
	}
	
	
		
}
//for(i=0;i<n;i++)
//	{
//		sr=0;
//		for(j=0;j<n1;j++)
//		{
//			sr=sr+a[i][j];
//		}
//	}
//	printf("sr=%d");
	