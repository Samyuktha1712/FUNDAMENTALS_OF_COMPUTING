#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	printf("maximum value is %d", (a,b,c));
}
int maximum(int x,int y,int z)
{
	int max=x;
	if(y>max)
	max=y;
	if(z>max)
	max=z;
	return max;
}