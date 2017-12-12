# include <bits/stdc++.h>

int main()
{
	int ans = 0;
	int check = 1;
	while(check <= 1000)
	{
		if(check%3==0 || check%5 == 0)
		{
			ans += check;
		}
		check++;
	}
	printf("%d\n", ans);
	return 0;
}