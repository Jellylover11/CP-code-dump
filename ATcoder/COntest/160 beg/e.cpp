#include <bits/stdc++.h>
using namespace std;

long long x, y, a, b, c, p, m = 0, t = 0, u = 0, v = 0, s;
priority_queue<pair<long long, int>> Q;

int main()
{
	cin >> x >> y >> a >> b >> c;

	for (int i = 0; i < a; i++) {
		cin >> p;
		Q.push(make_pair(p, 1));
	}

	for (int i = 0; i < b; i++) {
		cin >> p;
		Q.push(make_pair(p, 2));
	}

	for (int i = 0; i < c; i++) {
		cin >> p;
		Q.push(make_pair(p, 3));
	}

	while (t + u + v < x + y) {
		p = Q.top().first;
		s = Q.top().second;
		Q.pop();

		if (s == 1) {
			if (t < x) {
				t++;
				m += p;
			}
		}
		else if (s == 2) {
			if (u < y) {
				u++;
				m += p;
			}
		}
		else {
			v++;
			m += p;
		}
	}

	cout << m << endl;
}
