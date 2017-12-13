# include <bits/stdc++.h>
long long check = 600851475143;

int primes[2000000] = {0}, arra[2000000] = {0};

int seive()
{
	int k = 1, i, j;
	primes[0] = 2;
	for(i = 3; i<=2000; i+= 2)
	{
		if(arra[i] == 0)
		{
			for(j = 2*i; j<2000000; j+=i)
			{
				arra[j] = 1;
			}
			primes[k] = i;
			k ++;
		}
	}
	for(; i<2000000; i+= 2)
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
	long long ans = 0, i;
	int k = seive();
	for(i = 0; i<k; i++)
	{
		if(primes[i]>2000000)
		{
			break;
		}
		ans += primes[i];
	}
	printf("%lld\n", ans);
	return 0;
}