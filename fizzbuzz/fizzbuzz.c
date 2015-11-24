#include <stdio.h>

void fizzbuzz(int x, int y, int n)
{
	int i;

	for (i = 1; i <= n; i++) {
		if (!(i % x) && !(i % y)) {
			printf("FB ");
		} else if (!(i % x)) {
			printf("F ");
		} else if (!(i % y)) {
			printf("B ");
		} else {
			printf("%d ", i);
		}
	}

	return;
}

int main(int argc, char **argv)
{
	int i, x, y, n;
	FILE *f;


	f = fopen(argv[1], "r");
	while(fscanf(f, "%d %d %d", &x, &y, &n) != EOF) {
		fizzbuzz(x, y, n);
		putchar('\n');
	}
	
	fclose(f);

	return 0;
}
