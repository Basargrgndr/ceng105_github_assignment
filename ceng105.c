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


    return 0;
    }