#include<stdio.h>
int sum(int a[3],int b[3])
{
	int toplam[3];
	int i;
	for(i=0;i<3;i++)
	{
		toplam[i]=a[i]+b[i];
		printf("%d\n",toplam[i]);
	}
	
}
int main()
{
	int A[3], k;
	int B[3];
	
	for(k=0;k<3;k++)
	{
		printf("sayi giriniz=");
		scanf("%d",&A[k]);
		printf("tekrar sayi giriniz=");
		scanf("%d",&B[k]);
		
		
		
	}
	sum(A,B);
	return 0;
	
	
	
	
	
}
