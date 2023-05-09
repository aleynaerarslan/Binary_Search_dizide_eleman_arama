#include <stdio.h>
#include <stdlib.h>

//Aleyna ERARSLAN
//Binary search arama iþlemi ile verilen dizide istenen elamný bulan kod.
//Binary search'te veri kümesinin en ortasýna bakýlýr.
// Eðer aradýðýmýz deðer en ortadaki deðerden küçükse aramaya küçük taraf yani sol taraftan, büyükse sað taraftan devam edilir.
int main(int argc, char *argv[]) {
	
	int aranan_sayi; //kullanýcýnýn aramak istediði sayýyý tutacak.
	int sagindis=8; //dizinin son indisini temsil eder.
	int solindis=0; //dizinin ilk indisini temsil eder.
	int orta_indis;
	int bulundu=0;
	
	int dizi[9]={4,8,3,84,47,76,9,24,68};
	
	int i=0;
	printf("******BINARY SEARCH ILE DIZIDE ELEMAN ARAMA******\n");
	printf("dizide aramak istediginiz sayiyi giriniz: ");
	scanf("%d",&aranan_sayi);
	
	while(solindis <= sagindis)  //sol indisimiz sað indisimizden küçük ya da eþit ise buraya girecek.
	{
		orta_indis = (solindis + sagindis)/2; //orta indis ilk ve son indisin toplamýnýn yarýsýna eþittir.
		if(aranan_sayi == dizi[orta_indis])  //eðer bizim aradýðýmýz sayi dizinin orta indisinde bulunuyorsa bu bloða girecek.
		{
			bulundu=1; 
			break;  //bulunduðu için döngü kýrýlacak.
		}
		else if (aranan_sayi < dizi[orta_indis])  //eðer aranan sayi küçük ise dizinin ortasýndaki sayýdan
		{
			sagindis-=1;  //sað taraftaki dizinin sýnýrýný bir önceki elemana indirerek (yani sað indis deðerini bir azaltarak) arama iþlemini sol tarafa doðru sürdürüyoruz.
		}
		else if(aranan_sayi > dizi[orta_indis]) //eðer aranan sayý büyük ise dizinin ortasýndaki sayýdan
		{
			solindis+=1; //sol indis orta indis artý 1 olarak güncellenir. Bu þekilde, saðdaki kýsmý aramaya devam ederken sol sýnýrý daraltmýþ oluruz.
		}
	}
	if(bulundu){  //sayýmýz bulundu ise bu bloða girer ve indisi yazdýrýlýr.
		printf("aradiginiz sayi dizide bulundu :) sayinin indisi:%d",orta_indis);
	}
	else //sonuc olumsuz ise kullanýcýya bulunamadýðý belirtilir.
	printf("aradiginiz sayi dizide bulunamadi :(");
	return 0;
}
