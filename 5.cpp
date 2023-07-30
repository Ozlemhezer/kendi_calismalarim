#include<stdio.h>
int f(int A[],int eleman_sayisi)
{
	int i=0;
	int en_buyuk=0,en_kucuk=A[0], cnt1=0, cnt2=0;
	while(i<eleman_sayisi)
	{
		
		if(A[i]>en_buyuk)
		{
			en_buyuk=A[i];
			cnt1=i+1; 
			
		}
		else if(A[i]<en_kucuk)// 2 3 1
		{
			en_kucuk=A[i];
			cnt2=i+1;
			
		}
		
		i++;
			
	}
	printf("en kucuk deger=%d\n", en_kucuk);
	printf("en buyuk deger=%d\n", en_buyuk);
	printf("en buyuk degerin sirasi=%d\nen kucuk degerin sirasi=%d\n", cnt1, cnt2);
	
	
	
	
}
int main()
{
	int D[10],i;
	printf("10 sayi giriniz\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&D[i]);
	}
	f(D,10);
}
