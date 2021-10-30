#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i, j, a, b;
	string str;

	cin >> n;

	while (n--) {
		bool type;
		cin >> str;

		if (str[0] == 'R') {
			i=1;

			if (!(str[1] >= '0' && str[1] <= '9')) type = 0;
			else {
				i = 2;
				while (str[i++] != 'C' && i<str.size());

				if (i == str.size()) type = 0;
				else type = 1;
			}

		} else type = 0;

		if (type) {

			long long num, row = 0, col=0, r;

			for (i=1; str[i] != 'C'; i++);
			for (j=i-1; j>=1; j--) row += pow(10, i-j-1)*(str[j]-'0');
			for (j=str.size()-1; j>=i+1; j--) col += pow(10, str.size()-j-1)*(str[j]-'0');

			string s = "";
			num = col;

			while (num) {
				r = (num-1)%26;

				s += 'A'+r;

				num = (num-1)/26;
			}
			reverse(s.begin(), s.end());

			cout << s << row << endl;

		} else {
			string s = "";

			for (i=0; str[i] >= 'A' && str[i] <= 'Z'; i++) s += str[i];
			j = i;
			long long col = 0;

			for (i=s.size()-1; i>=0; i--) {
				int num = s[i]-'A'+1;
				col += pow(26, s.size()-i-1)*(s[i]-'A'+1);
			}

			s = "";

			for (; j<str.size(); j++) s += str[j];

			cout << 'R' << s << 'C' << col << endl;
		}
	}
}
