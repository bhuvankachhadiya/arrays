#include<stdio.h>
main()
{
	int a1[3],a2[2],a3[5],i,j=0;
	printf("enter elements for array1=\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a1[i]);
		
	}
	printf("enter elements for array2=\n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&a2[i]);
		
	}
	for(i=0;i<3;i++)
	{
		a3[j]=a1[i];
		j++;
	}
	for(i=0;i<2;i++)
	{
		a3[j]=a2[i];
		j++;
	}
	printf("merged array3:");
	for(j=0;j<5;j++)
	{
		printf("%d \n",a3[j]);
	}

	
	
	
	
	
}