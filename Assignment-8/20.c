#include<stdio.h>
int main()
{
	int a,sum =0,n,k,ct=0;
	printf("Enter the value n,k:");
	scanf("%d%d",&n,&k);
	printf("\nEnter the nos :");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
			ct++;
		if(ct>k)
			sum+=a;
	}
	printf("SUM %d:",sum);
	return 0;
}
