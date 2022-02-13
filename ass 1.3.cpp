#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:
			printf("a is even");
			break;
		case 1:
			printf("a is odd");
			break;
	}
	return 0;
}
