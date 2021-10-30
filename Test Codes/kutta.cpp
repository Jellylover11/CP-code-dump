#include <bits/stdc++.h>
using namespace std;

int main() {

	string s;
	string str;
	string str1="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	string str2 = "/.,mnbvcxz';lkjhgfdsa][poiuytrewq";
	cin >> s;
	cin >> str;

	if (s == "R") {

		for (int i = 0; i < str.size(); i++) {

			for (int j = 0; j < str1.size(); j++) {

				if (str[i] == str1[j]) {

					str[i] = str1[j - 1];
				}
			}

		}
	}

	else if (s == "L") {

		for (int i = 0; i < str.size(); i++) {

			for (int j = 1; j < str2.size(); j++) {

				if (str[i] == str2[j]) {

					str[i] = str2[j-1];
				}
			}

		}
	}

	cout << str;



	return 0;
}
