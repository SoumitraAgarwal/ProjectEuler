# include <bits/stdc++.h>
long long check = 600851475143;

int primes[1000000] = {0}, arra[1000000] = {0};

int seive()
{
	int k = 1, i, j;
	primes[0] = 2;
	for(i = 3; i<=1000; i+= 2)
	{
		if(arra[i] == 0)
		{
			for(j = 2*i; j<1000000; j+=i)
			{
				arra[j] = 1;
			}
			primes[k] = i;
			k ++;
		}
	}
	for(; i<1000000; i+= 2)
	{
		if(arra[i] == 0)
		{
			primes[k] = i;
			k++;
		}
	}
	return k;
}

int main()
{
	int ans = 0, i;
	int k = seive();
	for(i = 0; i<k; i++)
	{
		if(primes[i]>sqrt(check))
		{
			break;
		}
		if(check%primes[i] == 0)
		{
			ans = primes[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}