#include <stdio.h>
int main() {
	int m, n;
	int sum = 0, min = 0;
	scanf("%d\n%d", &m,&n);
	for (int i = m; i <= n; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				break;
			if (j == i-1) {
				sum += i;
				if (min == 0)
					min = i;
			}
		}
		if (i == 2) {
			sum += i;
			min = i;
		}
	}
	if (min != 0)
		printf("%d\n%d", sum, min);
	else
		printf("-1");
}