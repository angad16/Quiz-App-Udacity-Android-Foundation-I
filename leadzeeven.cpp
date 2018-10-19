#include<stdio.h>
int main()
{
	int n,count=0,a,sum=0,rem,i,num;
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		count++;
		n=n>>1;
	}
	a=(sizeof(n))*8-count;
	if(a%2==0)
	{
		for(i=num;num>0;num=num/10)
		{
			rem=num%10;
			sum=(sum)+rem;
		}
		printf("%d",sum);
	}
	else
	{
		
		while(num>0)
		{
			rem=num%8;
			sum=(sum*10)+rem;
			num=num/10;
		}
		printf("%d",sum);
	}
	
}
