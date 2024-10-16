#include <stdio.h>

int main() {
	int indice = 13, soma = 0, k;
	
	for(k = 0; k < indice; k++) {
		soma = soma + k;
	}
	
	printf("%d", soma); // 78
	
	return 0;
}
