# include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(a%b == 0)
	{
		return b;
	}
	if(b %a == 0)
	{
		return a;
	}
	if(a>b)
	{
		return gcd(b, a%b);
	}
	return gcd(a, b%a);
}
int main()
{
	long long ans = 1, i;
	for(i = 1; i<=20; i++)
	{
		ans = i*ans/gcd(i, ans);
	}
	printf("%lld\n", ans);
	return 0;
}