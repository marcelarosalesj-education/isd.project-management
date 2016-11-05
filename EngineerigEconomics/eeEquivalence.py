def FPS(i, n):
	return (1+i*n)

def FP(i, n):
	return pow((1+i),n)

def PF(i, n):
	return pow((1+i),(-n))

def PA(i, n):
	return (pow(1+i,n) - 1)/(i*pow(1+i,n))

def AP(i, n):
	return (i*pow(1+i,n))/(pow(1+i,n)-1)

def PG(i, n):
	return (pow(1+i,n) - i*n - 1)/(pow(i,2)*pow(1+i,n))

a = [250000,275000,302500, 332750, 366025]
ii = 0.15

res = a[0]*PA(ii,5) + a[1]*PA(ii,5)*PF(ii,5) + a[2]*PA(ii,5)*PF(ii,10) + a[3]*PA(ii,5)*PF(ii,15) + a[4]*PA(ii,5)*PF(ii,20) - 65000*PA(ii, 25) - 6000*PG(ii,25) + 200000*PF(ii, 25)

print res 