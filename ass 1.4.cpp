#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a,b");
scanf("%d%d",&a,&b);
printf ("add\n,sub\n,multi\n,div\n");
printf ("enter c");
scanf("%d",&c);
switch(c)
{
	case 0:
	printf("addition of a and b",a+b);
	break;
	case 1:
	printf("substarction of a and b",a-b);
	break;
	case 2:
	printf("multiplication of a and b",a*b);
	break;
	case 3:
	printf("division of a and b",a/b);
	break;
	default:
	printf ("enter the correct  choice");
	break;
	
	
}
return 0;
}
