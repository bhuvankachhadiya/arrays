#include<stdio.h>
main()
{
	int a[3][3],i,j,n,n1;
	
	printf("how many rows=");
	scanf("%d",&n);
	printf("how many columns=");
	scanf("%d",&n1);
	printf("enter array elements=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("a[%d][%d]=\n",i,j);
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
	
	
	
	
	
	
	
	
}