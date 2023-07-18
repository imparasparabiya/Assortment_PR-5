#include<stdio.h>

main()

{
	int a[25][25],b[25][25],sum[50][50];
	int i,j,n1,n2;
	
	printf("Enter Size of Array Row = ");
	scanf("%d",&n1);
	printf("Enter Size of Array Column = ");
	scanf("%d",&n2);
	
	printf("Enter Elements = \n");
	
	for(i=0;i<n1;i++)
	  {
	  	for(j=0;j<n2;j++)
	  	{
	  	printf("a[%d][%d]",i,j);
	  	scanf("%d",&a[i][j]);
	    }
	  }
	  printf("\n");
	 
	  for(i=0;i<n1;i++)
	  {
	  	for(j=0;j<n2;j++)
	  	{
	  	printf("b[%d][%d]",i,j);
	  	scanf("%d",&b[i][j]);
	    }
	  }
	  printf("\n");
	  
	  for(i=0;i<n1;i++)
	  {
	  	for(j=0;j<n2;j++)
	  	{
	      sum[i][j]=a[i][j]+b[i][j];
	    }
	    
	  }
	  for(i=0;i<n1;i++)
	    {
	    	for(j=0;j<n2;j++)
	    	{
	    		printf("sum = %d\t",sum[i][j]);
			}
		}
	  printf("\n");
	  
	  
}
