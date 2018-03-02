#include<stdio.h>
#include<conio.h>
int main()
{
long int a,temp;
	int result;
	scanf("%d",&a);
	temp=a;
	while(temp!=0)
	{
		temp=temp/10;
		result++;
	}
	printf("%d",result);
  getch();
	return 0;
}
