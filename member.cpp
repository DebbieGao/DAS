#include <iostream>
#include <cstring>
using namespace std;

#define MAX 500000

int main() {

	int n, k;
	cin >> n;
	int a[MAX];
	int b[MAX];
	int c[MAX];
	int mark[MAX];

	for (int i = 0; i<n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i<n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i<n; i++) {
		cin >> c[i];
	}

	cin >> k;

	memset(mark,0,n+1);

	int ii = 0;
	char result = ' ';
	int index = 0;
	int i = 0, j = 0, l = 0;

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
		if (result!=' ') {
			cout << result << endl;
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
			cout << result << endl;
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
					result='C';
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
			cout << result << endl;
			break;
		}

	}

	return 0;
}
