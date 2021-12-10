#include<bits/stdc++.h>
using namespace std;

double  ep = 1e-6; //precision (i.e specifies no of decimal digits after integer part)

double mul(double a, double b)
{
	double ans = 1;
	for (int i = 0; i < b; ++i) ans = ans * a;
	return ans;
}

int main()
{
	int n, r;// n ,r are number and rth root of number respectively
	cin >> n >> r;
	double mid, low = 1, high = n;

	while (high - low > ep)  //runs when h-l is less than 0.000001(i.e as we need 5 decimal digits after point)
	{
		mid = (high + low) / 2;
		if (mul(mid, r) < n) low = mid; //if mid^2 is less than n then ans lies between mid and high
		else high = mid;// else ans lies between low and mid

	}
	cout << low;// or high(i.e both values are same)


}
