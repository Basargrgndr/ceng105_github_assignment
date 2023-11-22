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