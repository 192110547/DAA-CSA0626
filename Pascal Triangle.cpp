#include <stdio.h>
int main() {
	int rows, coef = 1;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	for (int i = 0; i < rows; i++) {
		for (int space = 1; space <= rows - i; space++)
			printf("  ");
		for (int j = 0; j <= i; j++) {
			if (j != 0)
				coef = coef * (i - j + 1) / j;
			printf("%4d", coef);
		}
		printf("\n");
	}
	return 0;
}
