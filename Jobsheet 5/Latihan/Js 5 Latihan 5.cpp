//Created By Devani 23343033

#include <stdio.h>

main(void){
	int jawaban;
	
	printf("Berapakah hasil 3+4?\n");
	printf("jawab> ");
	scanf("%d", &jawaban);
	
	//apabila menggunakan if/else
	/**if(jawaban == 7){
		printf("Jawaban anda : Benar\n");
	} else {
		printf("Jawaban anda : Salah\n");
	}*/
	
	//apabila menggunakan operator ternary
	printf("Jawaban anda : %s\n", (jawaban == 7) ? "Benar" : "Salah");
}
