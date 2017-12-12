# include <bits/stdc++.h>

int main()
{
	int fibo1 = 1;
	int fibo2 = 1, ans = 0;
	while(fibo2 <= 4000000)
	{
		if(fibo2%2 == 0)
		{
			ans += fibo2;
		}
		fibo1 = fibo1^fibo2;
		fibo2 = fibo1^fibo2;
		fibo1 = fibo1^fibo2;
		fibo2 = fibo1 + fibo2;
	}
	printf("%d\n", ans);
	return 0;
}