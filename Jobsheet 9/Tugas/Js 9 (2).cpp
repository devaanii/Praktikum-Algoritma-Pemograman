#include<stdio.h>
#include<string.h>
int main(){
	char kata[100];
	
	printf("Masukkan kalimat: ");
	gets(kata);
	
	int pjgkata = strlen(kata);
	
	printf("Kebalikannya: ");
	for(int i = pjgkata-1; i>=0; i--){
		printf("%c", kata[i]);
	}
	
	return 0;
}