#include<stdio.h>
main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter the number for array A:\n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the number for array B:\n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d  ",c[i][j]);
		}
		printf("\n");
		
	}
	
	
	
	
	
	
	
}
