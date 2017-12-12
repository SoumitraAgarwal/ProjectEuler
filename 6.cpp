# include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n = 100;
	long long ans = n*n*(n+1)*(n+1)/4 - n*(n+1)*(2*n + 1)/6;
	printf("%lld\n", ans);
	return 0;
}