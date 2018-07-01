//#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

	//setvbuf(stdin, new char[1 << 20], _IOFBF, 1 << 20);
	//setvbuf(stdout, new char[1 << 20], _IOFBF, 1 << 20);

	int n;
	//cin >> n;
	scanf("%d", &n);

	char name[10];
	unordered_map<string, int> stdname;
	int i = 0;
	for (int i = 0; i < n; i++) {
		//cin >> name;
		scanf("%s", name);
		string input(name);
		auto nameiterator = stdname.find(input);
		if (nameiterator==stdname.end()) {
			
			stdname.insert({{ input,1 }});			
		}
		else {
			nameiterator->second++;
		}
	}

	auto nameiter = stdname.begin();
	for (auto it = stdname.begin(); it != stdname.end(); ++it) {
		if (it->second > nameiter->second) {
			nameiter = it;
		}
	}
	//cout << " " << nameiter->first << ":" << nameiter->second;

	printf("%s %d\n", nameiter->first.c_str(), nameiter->second);

	return 0;
}

