#include<stdio.h>
#include<conio.h>
int main()
{
{
char ch[100],a[100],b[100];
gets(ch);
int i,k;
k=strlen(ch);
for(i=0;i<k;i++)
{
	if(i%2==0)
	printf("%c",ch[i]);
	
  getch();
  return 0;
  }
