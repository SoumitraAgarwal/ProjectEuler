for i in range(333):
	for j in range(i,(1000 - i)/2 + 2):
		if(pow(i,2) + pow(j,2) == pow(1000 - i - j, 2)):
			print(i*j*(1000-i-j))