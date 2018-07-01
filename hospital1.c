#include <stdio.h>
#include <string.h>

//#define MAX 300000
#define MAX1 32768

int main() {

	int n;
	scanf("%d", &n);

	int w[MAX1];
	int i;
	int xt, wt;

	memset(w, 0,MAX1);

	for (i = 0; i< n; i++) {
		scanf("%d%d\n", &xt, &wt);
		w[xt] += wt;

	}


	long ww0[MAX1];
	long wwn[MAX1];
	long wx0[MAX1];
	long wxn[MAX1];
	memset(ww0, 0, MAX1);
	memset(wwn, 0, MAX1);
	memset(wx0, 0, MAX1);
	memset(wxn, 0, MAX1);

	long ww = 0;
	for (i = 0; i< MAX1; i++) {
		ww += w[i];
		ww0[i] = ww;
	}

	ww = 0;
	for (i = MAX1 - 1; i>=0; i--) {
		ww += w[i];
		wwn[i] = ww;
	}
	

	long wx = 0;
	for (i = 0; i< MAX1; i++) {
		wx += w[i] * i;
		wx0[i] = wx;
	}


	wx = 0;
	for (i = MAX1 - 1; i>=0; i--) {
		wx += w[i] * i;
		wxn[i] = wx;
	}
	

	long target = ww0[MAX1]*(MAX1-1) - wx0[MAX1];
	int targetX = MAX1-1;
	
	if(wx0[MAX1]< target){
		target = wx0[MAX1];
		targetX = 0;
	}
	
	

	long temp;

	for (i = 1; i < MAX1-1; i++) {

		temp = (ww0[i-1] - wwn[i + 1])*i - wx0[i-1] + wxn[i+1];

		if (temp < target) {
			target = temp;
			targetX = i;
			
		}
	}
	
	printf("%d\n", targetX);
	printf("%ld\n", target);



	return 0;
}
