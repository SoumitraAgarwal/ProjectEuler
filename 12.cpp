# include <bits/stdc++.h>

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

int divisors(long long int p)
{
	int k = 0, divi = 1;
	long long q = p;
	while(primes[k] <= sqrt(q))
	{
		int temp = 1;
		while(p%primes[k] == 0)
		{
			p /= primes[k];
			temp ++;
		}
		divi *= temp;
		k++;
	}
	return divi;
}

int main()
{
	seive();
	int i;
	for(i = 4; i< 1000000; i++)
	{
		if(divisors(i*(i+1)/2)>500)
		{
			break;
		}
	}
	printf("%d\n", i*(i+1)/2);
	return 0;
}