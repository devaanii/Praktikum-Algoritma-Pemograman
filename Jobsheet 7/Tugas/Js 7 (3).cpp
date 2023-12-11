#include<stdio.h>
#include<string.h>

int main(){
	char pass[13] = "halosemuanya";
	char pass1[13];
	int banding;
	
	printf("Masukkan Password anda: ");
	scanf("%s", &pass1);
	
	banding = strcmp(pass,pass1);
	if(banding == 0){
		printf("Anda berhasil login!");
	} else {
		printf("Maaf! Password anda salah");
	}
	
	return 0;
}
 