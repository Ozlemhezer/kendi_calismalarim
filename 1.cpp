/*girilen say�n�n tersini alan fonksiyon*/
#include<stdio.h>
#include<stdlib.h>
void ters_alma(int sayi2,int basamak_sayisi)/*header*/   /*gelen sayi basamaklar�n� bulup diziye atayan fonkisyon*/
{
	int sayi[100],i, k, gecici;
	for(i=0;i<basamak_sayisi;i++)// bu k�s�mda sayinin basamaklar�n� diziye atayaca��z.girilen sayimiz a
	{
		k=sayi2%10;
		sayi2=sayi2/10;	
		sayi[i]=k; //sayi basamaklar�n� bir diziye atad�k �imdi ge�ici bir integer a ihtiyac�m�z var 
	}

	/*diziyi yazd�rma k�sm�*/
	for(i=0;i<basamak_sayisi;i++)
	{
		printf("%d", sayi[i]);
	}
	
}
int main()
{
	int sayi,cnt=1, sayi2;
	printf("sayi giriniz=");
	scanf("%d",&sayi);
	/*girilen sayinin basamak sayisini bulma k�sm�*/
	sayi2=sayi;
	while(sayi/10!=0)         
	{
		sayi=sayi/10;
		cnt++;//basamak sayisi 
	}
	printf("basamak sayisi=%d\n", cnt);
	//sayiyi ve basamak sayisini biliyoruz
	ters_alma(sayi2,cnt);
}
