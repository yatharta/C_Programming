#include<stdio.h>

void main(){
    long unsigned int n,a=-1,b=1,c,i, sum=0;
	
	printf("Enter the Number of terms:");
	scanf("%lu",&n);
		for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		sum+=c;
	}
	printf("Sum = %lu", sum);
	getch();
}
