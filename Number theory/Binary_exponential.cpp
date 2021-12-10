#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll BinExpRecr(ll a, ll b)
{

	if (b == 0) return 1;

	ll ans = BinExpRecr(a, b / 2);

	if (b & 1) return a * ans * ans; // if b is odd then a can written as a*a^2
	else return ans * ans;

}

int main()
{
	ll a, b;
	cin >> a >> b;
	cout << BinExpRecr(a, b);
}
