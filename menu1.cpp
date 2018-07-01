//#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <string>
#include <list>

using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	char input[42];
	unordered_map<string, int> dishs;
	list<string> newdishs;

	for (int i = 0; i < n; i++) {
		//cin >> name;
		scanf("%s", input);
		string dish(input);
		auto dishiterator = dishs.find(dish);

		if (dishiterator == dishs.end()) {

			dishs.insert({ { dish,1 } });
		}
		else {
			dishiterator->second++;
			if (dishiterator->second==2) {
				printf("%s\n",dishiterator->first.c_str());
				//newdishs.push_back(dishiterator->first);
			}
		}
	}


	//for(string str:newdishs){
		//printf("%s\n",str.c_str());
	//}


	return 0;
}

