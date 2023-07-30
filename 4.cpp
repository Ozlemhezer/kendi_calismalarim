#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double f(int A[],int islem, int size)//hem diziyi hem de iþlem türünü belirten integer alacak.
{
	int i;
	double carpim=1.0, toplam=0.0, h=0.0;
	for(i=0; i<3 ;i++)
	{
		toplam+=A[i];
		carpim*=A[i];
		h=h+(1/(A[i]));
	}
	switch(islem){
		case 1: return toplam/3; break;
		case 2: return pow(carpim,1.0/3); break;
		case 3: return 3/h; break;
		default:printf("Hata!");
	}
}
int main()
{
	int i;
	double result;
	int A[3]={6,3,1000};
	printf("islem giriniz\n1)aritmatik ortalama\n2)geometrik ortalama\n3)harmonik ortalama\n");
	scanf("%d",&i);
	result=f(A,i,3);
	switch(i){
		case 1:printf("%lf",result); break;
		case 2:printf("%lf",result); break;
		case 3:printf("%lf",result); break;
		default:printf("Hata");
	}
	
	return 0;
}
