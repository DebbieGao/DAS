#include <stdio.h>
#include <string.h>

#define MAX 500000

int main() {

	int n, k;
	scanf("%d", &n);

	int a[MAX];
	int b[MAX];
	int c[MAX];
	int mark[MAX];

	int i, j, l;
	for (i = 0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i<n; i++) {
		scanf("%d", &b[i]);
	}

	for (i = 0; i<n; i++) {
		scanf("%d", &c[i]);
	}

	scanf("%d", &k);

	memset(mark, 0, n + 1);

	int ii = 0;
	char result = ' ';
	int index = 0;
	i = 0;
	j = 0;
	l = 0;

	while (ii<n) {

		while (i<n)
		{
			index = a[i];

			if (mark[index] == 1) {
				i++;
			}
			else {
				if (index == k) {
					result = 'A';
				}
				else {
					mark[index] = 1;
					i++;
					ii++;
				}
				break;
			}

		}
		if (result != ' ') {
			printf("%c\n", result);
			break;
		}

		while (j<n)
		{
			index = b[j];
			if (mark[index] == 1) {
				j++;
			}
			else {
				if (index == k) {
					result = 'B';
				}
				else {
					mark[index] = 1;
					j++;
					ii++;
				}
				break;
			}
		}

		if (result != ' ') {
			printf("%c\n", result);
			break;
		}


		while (l<n)
		{
			index = c[l];
			if (mark[index] == 1) {
				l++;
			}
			else {
				if (index == k) {
					result = 'C';
				}
				else {
					mark[index] = 1;
					l++;
					ii++;
				}
				break;
			}

		}

		if (result != ' ') {
			printf("%c\n", result);
			break;
		}

	}

	return 0;
}


