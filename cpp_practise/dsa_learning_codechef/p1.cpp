#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll k;
	int d0, d1, tmp;
	cin>>k>>d0>>d1;
	tmp = d0 + d1;

	assert(k >=2 and k <= 1e12);
	assert(d0 >= 1 and d0 <= 9);
	assert(d1 >= 0 and d1 <= 9);
	
	ll ans = tmp;
	ll sum = (2*tmp) % 10 + (4*tmp) % 10 + (8*tmp) % 10 + (6*tmp) % 10;

	k -= 2;

	if(k > 0) {
		ans += (tmp % 10);
		k--;
	}

	ans += (k / 4) * sum;

	k %= 4;

	int p = 2;
	while(k--) {
		ans += (p*tmp) % 10;
		p = (p * 2) % 10;
	}

	if((ans % 3) == 0)	cout<<"YES\n";
	else 				cout<<"NO\n";	
}

int main() {
	int t;
	cin>>t;
	while(t--) solve();
}