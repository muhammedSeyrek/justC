#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct kimlik{
	char ad[10];
	char soyad[20];
	long int yas;
}id;
typedef struct iletisim{
	char address[20];
	int tel;
}iletisim;
typedef struct kisi{
	iletisim iletisim;
	id kimlik;
}kisi;
void showInfo(kisi kisi){
	printf("\n\nKisi\n");
	printf("ad: %s\n",kisi.kimlik.ad);
	printf("soyad: %s\n",kisi.kimlik.soyad);
	printf("yas: %d\n",kisi.kimlik.yas);
	printf("adres: %s\n",kisi.iletisim.address);
	printf("telefon: %d\n",kisi.iletisim.tel);
}
int main(){
	kisi liste[20];
	char option;
	int kisiSayisi = 0; 
	do{
		printf("Yeni kisi girmek istiyormusun(e/h):");
		scanf(" %c",&option);
		if(option == 'h'){
			break;
		}
		if(kisiSayisi == 19){
			printf("Liste Dolu");
			break;
		}
		if(option == 'e'){
			char *ad;
			ad = (char *) malloc(sizeof(char));
			char *soyad;
			soyad = (char *) malloc(sizeof(char));
			int yas;
			char *adres;
			adres = (char *) malloc(sizeof(char));
			int telefon;
			printf("Sirayla ad soyad yas adres ve telefon bilgilerini giriniz:\n");
			scanf(" %s %s %d %s %ld",ad,soyad,&yas,adres,&telefon);
			strcpy(liste[kisiSayisi].kimlik.ad,ad);
			strcpy(liste[kisiSayisi].kimlik.soyad,soyad);
			liste[kisiSayisi].kimlik.yas = yas;
			strcpy(liste[kisiSayisi].iletisim.address,adres);
			liste[kisiSayisi].iletisim.tel = telefon;
			kisiSayisi++;
		}
	}
	while(option != 'h');
	int i;
	FILE *fPtr;
	for(i = 0; i < kisiSayisi; i++){
		showInfo(liste[i]);
		fPtr = fopen("text.txt","w");
		fprintf(fPtr,"%s %s %d %s %d",liste[i].kimlik.ad,liste[i].kimlik.soyad,liste[i].kimlik.yas,liste[i].iletisim.address,
		liste[i].iletisim.tel);
		fclose(fPtr);
	} 
	return 0;		
}
