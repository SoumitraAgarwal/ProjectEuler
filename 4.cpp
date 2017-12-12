# include <bits/stdc++.h>
using namespace std;
int pali(int k)
{
	vector <int> digits;
	int i;
	while(k)
	{
		digits.push_back(k%10);
		k /= 10;
	}

	int p = digits.size();
	for(i = 0; i<p; i++)
	{
		if(digits[i]!= digits[p-i - 1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int ans = 0, i, j;
	for(i = 100; i<1000; i++)
	{
		for(j = i; j < 1000; j++)
		{
			if(pali(i*j))
			{
				ans = max(ans, i*j);
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}