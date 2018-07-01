//#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring> 

#define MAX 100001

//using namespace std;

int main() {
	
	//setvbuf(stdin, new char[1<<20], _IOFBF, 1<<20);
	//setvbuf(stdout, new char[1<<20], _IOFBF, 1<<20);
	
	char ss1[MAX], ss2[MAX];
	int l1, l2;
	//while (cin>>ss1>>ss2) {
	while (scanf("%s %s", ss1, ss2) != EOF) {

		l1 = strlen(ss1);
		l2 = strlen(ss2);

		if (l1 != l2) {
			printf("%c%c\n", 'N','O');
			//cout << "NO" << endl;
		}
		else {

			std::queue<char> s1, s2;
			for (int j = 0; j<l1; j++) {
				s1.push(ss1[j]);
				s2.push(ss2[j]);
			}

			//match or not
			std::queue<char> st1, st2;
			char t;
			int jj=0;
			for (jj = 0; jj < l1; jj++) {
				
				st1 = s1;
				st2 = s2;

				while (!st1.empty() && !st2.empty())
				{
					
					if (st1.front() == st2.front()) {
						st1.pop();
						st2.pop();						
					}
					else {
						break;					
					}
				}

				if (st1.empty()) {
					printf("%c%c%c\n", 'Y', 'E','S');
					//cout << "YES" << endl;
					break;
				}
				else {
					t = s1.front();
					s1.pop();
					s1.push(t);
				}

			}
			
			if (jj >= l1) {
				printf("%c%c\n", 'N', 'O');
				//cout << "NO" << endl;
			}

		}

	}



	return 0;
}

