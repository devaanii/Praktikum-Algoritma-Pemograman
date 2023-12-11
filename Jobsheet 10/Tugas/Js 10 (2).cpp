// created by Devani (23343033)

#include<stdio.h>

struct zodiakorg{
	int tanggal;
	int bulan;
	int tahun;
	char spasi;
};

int main(){
	struct zodiakorg zodiakk;
	
	printf("Masukkan tanggal lahir anda [tgl-bln-tahun]: ");
	scanf("%d %c %d %c %d", &zodiakk.tanggal, &zodiakk.spasi, &zodiakk.bulan, &zodiakk.spasi, &zodiakk.tahun);
	
	if((zodiakk.bulan == 12 && zodiakk.tanggal >= 22) || (zodiakk.bulan == 1 && zodiakk.tanggal <= 19)){
		printf("Zodiak Anda adalah: Capricorn");
	
	}else if((zodiakk.bulan == 1 && zodiakk.tanggal >= 20) || (zodiakk.bulan == 2 && zodiakk.tanggal <=18)){
		printf("Zodiak Anda adalah: Aquarius");
	
	}else if((zodiakk.bulan == 2 && zodiakk.tanggal >=19) || (zodiakk.bulan == 3 && zodiakk.tanggal <=20)){
		printf("Zodiak Anda adalah: Pisces");
		
	} else if((zodiakk.bulan == 3 && zodiakk.tanggal >=21) || (zodiakk.bulan == 4 && zodiakk.tanggal <=19)){
		printf("Zodiak Anda adalah: Aries");
		
	}else if((zodiakk.bulan == 4 && zodiakk.tanggal >=20) || (zodiakk.bulan == 5 && zodiakk.tanggal <=20)){
		printf("Zodiak Anda adalah: Taurus");
		
	}else if((zodiakk.bulan == 5 && zodiakk.tanggal >=21) || (zodiakk.bulan == 6 && zodiakk.tanggal <=20)){
		printf("Zodiak Anda adalah: Gemini");
		
	}else if((zodiakk.bulan == 6 && zodiakk.tanggal >=21) || (zodiakk.bulan == 7 && zodiakk.tanggal <=22)){
		printf("Zodiak Anda adalah: Cancer");
		
	}else if((zodiakk.bulan == 7 && zodiakk.tanggal >=23) || (zodiakk.bulan == 8 && zodiakk.tanggal <=22)){
		printf("Zodiak Anda adalah: Leo");
		
	}else if((zodiakk.bulan == 8 && zodiakk.tanggal >=23) || (zodiakk.bulan == 9 && zodiakk.tanggal <=22)){
    	printf("Zodiak Anda adalah: Virgo");
    	
	}else if((zodiakk.bulan == 9 && zodiakk.tanggal >=23) || (zodiakk.bulan == 10 && zodiakk.tanggal <=22)){
    	printf("Zodiak Anda adalah: Libra");
    	
	}else if((zodiakk.bulan == 10 && zodiakk.tanggal >=23) || (zodiakk.bulan == 11 && zodiakk.tanggal <=21)){
    	printf("Zodiak Anda adalah: Scorpio");
    	
	}else if((zodiakk.bulan == 11 && zodiakk.tanggal >=23) || (zodiakk.bulan == 12 && zodiakk.tanggal <=21)){
    	printf("Zodiak Anda adalah: Sagitarius");
    	
	}else{
    	printf("Tanggal dan bulan lahir tidak valid");
	}
	printf("\n");
	
	return 0;
}