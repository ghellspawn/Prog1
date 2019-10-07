#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int pontuacao(int m, char mapa[][m], int i, int j) {
	if(mapa[i][j] == '.') {
		return 0;
	}
	else if(mapa[i][j] == 'b') {
		return 1;
	}
	else if(mapa[i][j] == 'p') {
		return 5;
	}
	else if(mapa[i][j] == 'o') {
		return 10;
	}
	else if(mapa[i][j] == 'd') {
		return 50;
	}
}


int backtracking(int n, int m, char mapa[][m], int mapa_visitado[][m], int i, int j) {
	if(mapa[i][j] == '#' || mapa_visitado[i][j] == 1) {
		return 0;
	}
	else {
		mapa_visitado[i][j] = 1;
		int a = 0, b = 0, c = 0, d = 0;

		if(i + 1 < n) { // baixo
			a = pontuacao(m, mapa, i, j) + backtracking(n, m, mapa, mapa_visitado, i + 1, j);
		}
		if(j + 1 < m) { // direita
			b = pontuacao(m, mapa, i, j) + backtracking(n, m, mapa, mapa_visitado, i, j + 1);
		}
		if(i - 1 >= 0) { // cima
			c = pontuacao(m, mapa, i, j) + backtracking(n, m, mapa, mapa_visitado, i - 1, j);
		}
		if(j - 1 >= 0) { // esquerda
			d = pontuacao(m, mapa, i, j) + backtracking(n, m, mapa, mapa_visitado, i, j - 1);
		}

		mapa_visitado[i][j] = 0;

		if(a >= b && a >= c && a >= d) {
			return a;
		}
		else if(b >= a && b >= c && b >= d) {
			return b;
		}
		else if(c >= a && c >= b && c >= d) {
			return c;
		}
		else if(d >= a && d >= b && d >= c) {
			return d;
		}
	}
}

int main() {
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	char mapa[n][m];
	int mapa_visitado[n][m];

	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			scanf(" %c", &mapa[i][j]);
			mapa_visitado[i][j] = 0;
		}
	}

	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("%d", mapa_visitado[i][j]);
		}
		printf("\n");
	}

	int resultado = backtracking(n, m, mapa, mapa_visitado, 0, 0);
	printf("%d\n", resultado);

	return 0;
}