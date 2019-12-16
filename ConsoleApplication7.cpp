// ConsoleApplication7.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	//Genel değişkenlerimiz
	int dizi[30], eklenecekSayi, elemanSayisi, i, lokasyon;

	cout << "\nDiziye Kac Tane Eleman ekleyeceksiniz? :";
	cin >> elemanSayisi;

	for (i = 0; i < elemanSayisi; i++) {
		cout<<"\n Lutfen dizinin %d. indisindeki sayiyi girin... ", i;
		cin>> dizi[i];
	}

	cout << "\nDiziye Eklemek istediginiz sayiyi girin :";
	cin>> eklenecekSayi;

	cout << "\nHangi Pozisyona (indis + 1) Eleman Eklemek İstiyorsunuz? .. ";
	cin >> lokasyon;

	//Belirtilen indis için boşluk oluşturuyoruz. En önemli yer burası
	//Eklemek istediğimiz indisteki ve SONRAKİ indisteki tüm sayılar birer ileri kaydırılır
	for (i = elemanSayisi; i >= lokasyon; i--) {
		dizi[i] = dizi[i - 1];
	}

	//diziye eleman eklediğimiz için eleman sayısını 1 artıyoruz.
	elemanSayisi++;

	//Diziler sıfırdan başladığı için indis karşılığı lokasyonun 1 eksiği olacaktır.
	//Burada lokasyona eleman yerleştirmeyi yapıyoruz.
	dizi[lokasyon - 1] = eklenecekSayi;

	//Aşağıdaki döngü dizimizin yeni halini ekrana basıyor.
	for (i = 0; i < elemanSayisi; i++)
	{
		if (i == lokasyon - 1)
		{
			cout<<"\n dizi[%d] %d ==> Bu eleman diziye yeni eklendi", i, dizi[i];
		}
		else
		{
			cout<<"\n dizi[%d] %d", i, dizi[i];
		}

	}


	return (0);
}