#include<stdio.h>
void f(int a[10])
{ 	
	
	int i;
	int gecici;
	for(i=0;i<10/2;i++)
	{
		gecici=a[i];
		a[i]=a[10-1-i];
		a[10-1-i]=gecici;
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int A[10],k,i;
	printf("10 sayi giriniz");
	for(i=0;i<10;i++)
	{
		scanf("%d",&k);
		A[i]=k;
	}
	f(A);
	return 0;
}



