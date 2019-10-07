#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct rato ratos;

struct rato {
    int cheese, left_child, right_child;
};

int percorrer(ratos rato[], int i, int q) {
    if(q == 0) {
        return 1; // se ele conseguiu comer
    }
    else if(i == -1) {
        return 0; // se ele nao conseguiu comer 
    }
    else {
        int a = percorrer(rato, rato[i].left_child, q - rato[i].cheese);
        int b = percorrer(rato, rato[i].right_child, q - rato[i].cheese);
        
        if(a >= b) {
            return a;
        }
        else {
            return b;
        }
    }
}

int main() {
    int b, i, q, aux = 0;
    scanf("%d %d %d", &b, &i, &q);
    ratos rato[b];

    while(b--) {
        scanf("%d %d %d", &rato[aux].cheese, &rato[aux].left_child, &rato[aux].right_child);
        aux++;
    }

    if(percorrer(rato, i, q) == 1) {
        printf("SIM\n");
    }
    else {
        printf("NAO\n");
    }
    
	return 0;
}