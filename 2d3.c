#include<stdio.h>
main()
{
	int a[100][100],sum=0,i,j,n,n1;
	printf("how many row=");
	scanf("%d",&n);
	printf("how many column=");
	scanf("%d",&n1);
	printf("enter elements=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
		   printf("a[%d][%d]=\t",i,j);
		   scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
		   sum=sum+a[i][j];
		   
		}
	}
	printf("sum of elements=%d\n",sum);
	int ave=(sum)/(n*n1);
	printf("average of elements=%d\n",ave);
	
	
	
	
	
	
	
	
}