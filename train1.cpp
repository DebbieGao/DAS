#include <stdio.h>
#include <stack>

#define MAX1 100000 
#define MAX2 200000 

int main() {

	int n, m;
	scanf("%d%d", &n, &m);

	int a[MAX1];
	int num[MAX2];
	char op[MAX2];

	std::stack<int> s;

	for (int i = 0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	int ii = 1;
	int j = 0;

	for (int i = 0; i < n; i++) {

		if (a[i] == ii) {
			num[j] = a[i];
			op[j] = 'P';
			ii++;
			j++;
		}
		else if (s.size()<m)
		{
			s.push(a[i]);
			op[j] = 'I';
			num[j] = a[i];
			j++;
		}

		while(!s.empty() && s.top() == ii) {
			s.pop();
			num[j] = s.top();
			op[j] = 'O';						
			ii++;
			j++;
		}
	}

	if (!s.empty()) {
		printf("%c%c\n", 'N', 'o');
	}
	else
	{
		for (int i = 0; i < j; i++) {
			printf("%d %c\n", num[i], op[i]);
		}
	}

	
	return 0;
}

