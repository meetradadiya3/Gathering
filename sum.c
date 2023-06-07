#include<stdio.h>
sum(int a[])

{
	int i,sum=0,n;
	printf("enter marks= ");
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
	
	printf("a[%d]= ",i);
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	
	printf("Sum of all Element=%d\n",sum);
	

	
	
}

main()
{
	
	int a[100];
	sum(a);

}

