// Created By Devani 23343033

#include <stdio.h>

int main(){
	char name[50], email[50];
	
	printf("Created by Devani 23343033\n");
	printf("Nama: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Email: ");
	fgets(email,  sizeof(email), stdin);
	
	printf("\n----------------------------\n");
	printf("Nama anda: %s", name);
	printf("Alamat email: %s", email);
	
	return 0;
}