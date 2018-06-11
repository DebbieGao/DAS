#include <stdio.h>

#define MAX 200000

int main() {

	int n, m;
	scanf("%d%d", &n, &m);

	double a[MAX];
	double b[MAX];
	double x[MAX];
	double y[MAX];

	int i, j;

	for (i = 0; i<n; i++) {
		scanf("%lf%lf\n", &a[i], &b[i]);
	}

	for (i = 0; i<m; i++) {
		scanf("%lf%lf\n", &x[i], &y[i]);
	}

	int lo, mi, hi;
	double yy[MAX];

	for (i = 0; i < m; i++) {

		lo = 0;
		hi = n - 1;

		if (y[i] >= (b[hi] - b[hi] / a[hi] * x[i])) {
			printf("%d\n", n);
		}else {

			while (lo < hi) {

				mi = (lo + hi) / 2;
				yy[mi] = b[mi] - b[mi] / a[mi] * x[i];
				if (y[i] < (b[mi] - b[mi] / a[mi] * x[i])) {
					hi = mi;
				}
				else {
					lo = mi + 1;
				}

			}
			printf("%d\n", lo);
		}

	}

	return 0;
}

