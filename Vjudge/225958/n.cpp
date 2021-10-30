#include <bits/stdc++.h>
using namespace std;

int num[100], n;

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int calc()
{
	int i, j, maxn = 0;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			maxn = max(maxn, gcd(num[i], num[j]));
	return maxn;
}

int main()
 {
   int t;
   cin>>t;
   char ch;
   for(int i=1;i<=t;i++)
    {
      n=0;
      while (true)
		{
			scanf("%d", &num[n++]);
			while ((ch = getchar()) == ' ');
			ungetc(ch, stdin);
			if (ch == 10 || ch == -1)
                break;
		}
		printf("%d\n", calc());
    }
    return 0;
   }
