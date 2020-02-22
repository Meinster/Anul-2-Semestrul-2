#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct produs {
	int nrCod;
	int *cod;
	char* den;
	float pret;
	float cant;
};

void citireVectorProduse(produs *p, int n) {
	for (int i = 0; i < n; i++) {
		printf("nrCod = ");
		scanf("%d", &p[i].nrCod);
		printf("Cod = ");
		p[i].cod = (int*)(malloc(p[i].nrCod * sizeof(int)));
		for (int j = 0; j < p[i].nrCod; j++) {
			scanf("%d", &p[i].cod[j]);
		}
		printf("Denumire = ");
		char buffer[20];
		scanf("%s", buffer);
		p[i].den = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
		strcpy(p[i].den, buffer);
		printf("Pret = ");
		scanf("%f", &p[i].pret);
		printf("Cantitate = ");
		scanf("%f", &p[i].cant);
	}
}

void afisareVectorProduse(produs *p, int n) {
	for (int i = 0; i < n; i++) {
		printf("\nCod= ");
		for (int j = 0; j < p[i].nrCod; j++) {
			printf("%d", p[i].cod[j]);
		}
		printf(" Denumire= %s Pret= %f Cantitate= %f", p[i].den, p[i].pret, p[i].cant);
	}
}

void dezalocareVectorProduse(produs *p, int n) {
	for (int i = 0; i < n; i++) {
		free(p[i].den);
		free(p[i].cod);
	}
	free(p);
}



int main() {
	produs *p = (produs*)(malloc(1 * sizeof(produs)));
	citireVectorProduse(p, 1);
	afisareVectorProduse(p, 1);
	dezalocareVectorProduse(p, 1);
	_getch();
}