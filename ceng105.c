#include <stdio.h>

#include <stdio.h>

int main(){
	int satir,sutun;
	int satirToplam,sutunToplam;
	printf("Matriste kac satir olsun?: ");
	scanf("%d",&satir);
	printf("Matriste kac sutun olsun?: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	int i,j;
	
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			printf("Matrisin [%d][%d]. degerini giriniz:",i,j);
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
        }
	
    printf("SATIR TOPLAM\n");


for(i=0; i<satir; i++){
		satirToplam=0;
		for(j=0; j<sutun;j++){
sutunToplam=0;
		for(i=0; i<satir;i++){
			sutunToplam += matris[i][j];
		}
		printf("Matrisin %d. sutunundaki sayilarin toplami: %d\n",j+1,sutunToplam);	
	}
}
return 0;
    }
