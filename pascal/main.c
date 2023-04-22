#include <stdio.h>
#include "pascal.h"

int main(void) {
	printf("\033[1;36m"); //brighten text and change to cyan
	for (int n = 0; n < ROWS; n++){
		for (int i = 0; i < ROWS - n; i++) printf("  "); //make spacing for triangle
		for (int k = 0; k <= n; k++) {
			printf("%4d", binomial(n, k)); //calculate value in triangle
		}
		puts("");
	}
	printf("\033[0m"); //change text attributes to default
	return 0;
}