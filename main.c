#include <stdio.h>
#include <stdlib.h>

//Aleyna ERARSLAN
//Binary search arama i�lemi ile verilen dizide istenen elamn� bulan kod.
//Binary search'te veri k�mesinin en ortas�na bak�l�r.
// E�er arad���m�z de�er en ortadaki de�erden k���kse aramaya k���k taraf yani sol taraftan, b�y�kse sa� taraftan devam edilir.
int main(int argc, char *argv[]) {
	
	int aranan_sayi; //kullan�c�n�n aramak istedi�i say�y� tutacak.
	int sagindis=8; //dizinin son indisini temsil eder.
	int solindis=0; //dizinin ilk indisini temsil eder.
	int orta_indis;
	int bulundu=0;
	
	int dizi[9]={4,8,3,84,47,76,9,24,68};
	
	int i=0;
	printf("******BINARY SEARCH ILE DIZIDE ELEMAN ARAMA******\n");
	printf("dizide aramak istediginiz sayiyi giriniz: ");
	scanf("%d",&aranan_sayi);
	
	while(solindis <= sagindis)  //sol indisimiz sa� indisimizden k���k ya da e�it ise buraya girecek.
	{
		orta_indis = (solindis + sagindis)/2; //orta indis ilk ve son indisin toplam�n�n yar�s�na e�ittir.
		if(aranan_sayi == dizi[orta_indis])  //e�er bizim arad���m�z sayi dizinin orta indisinde bulunuyorsa bu blo�a girecek.
		{
			bulundu=1; 
			break;  //bulundu�u i�in d�ng� k�r�lacak.
		}
		else if (aranan_sayi < dizi[orta_indis])  //e�er aranan sayi k���k ise dizinin ortas�ndaki say�dan
		{
			sagindis-=1;  //sa� taraftaki dizinin s�n�r�n� bir �nceki elemana indirerek (yani sa� indis de�erini bir azaltarak) arama i�lemini sol tarafa do�ru s�rd�r�yoruz.
		}
		else if(aranan_sayi > dizi[orta_indis]) //e�er aranan say� b�y�k ise dizinin ortas�ndaki say�dan
		{
			solindis+=1; //sol indis orta indis art� 1 olarak g�ncellenir. Bu �ekilde, sa�daki k�sm� aramaya devam ederken sol s�n�r� daraltm�� oluruz.
		}
	}
	if(bulundu){  //say�m�z bulundu ise bu blo�a girer ve indisi yazd�r�l�r.
		printf("aradiginiz sayi dizide bulundu :) sayinin indisi:%d",orta_indis);
	}
	else //sonuc olumsuz ise kullan�c�ya bulunamad��� belirtilir.
	printf("aradiginiz sayi dizide bulunamadi :(");
	return 0;
}
