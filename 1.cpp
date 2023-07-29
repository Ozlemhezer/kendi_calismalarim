/*girilen sayýnýn tersini alan fonksiyon*/
#include<stdio.h>
#include<stdlib.h>
void ters_alma(int sayi2,int basamak_sayisi)/*header*/   /*gelen sayi basamaklarýný bulup diziye atayan fonkisyon*/
{
	int sayi[100],i, k, gecici;
	for(i=0;i<basamak_sayisi;i++)// bu kýsýmda sayinin basamaklarýný diziye atayacaðýz.girilen sayimiz a
	{
		k=sayi2%10;
		sayi2=sayi2/10;	
		sayi[i]=k; //sayi basamaklarýný bir diziye atadýk þimdi geçici bir integer a ihtiyacýmýz var 
	}

	/*diziyi yazdýrma kýsmý*/
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
	/*girilen sayinin basamak sayisini bulma kýsmý*/
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
