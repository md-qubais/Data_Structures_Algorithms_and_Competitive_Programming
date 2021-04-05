#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e4 + 5;

int n;
int a[N];
int cache[N][5];

int dp(int idx, int prv)
{
	if(idx > n)
		return 0;
	int &ans = cache[idx][prv];
	if(ans != -1)
		return ans;
	ans = 1e9;
	for(int i = 1; i <= 4; i++)
	{
		int diff1 = a[idx] - a[idx - 1];
		int diff2 = i - prv;
		if(diff1 > 1)
			diff1 = 1;
		if(diff1 < -1)
			diff1 = -1;
		if(diff2 > 1)
			diff2 = 1;
		if(diff2 < -1)
			diff2 = -1;
		int cur = (diff1 != diff2) + dp(idx + 1, i);
		ans = min(ans, cur);
	}
	return ans;
}

int32_t main()
{
	IOS;
	int t;
	cin >> t;
	int tc = 0;
	while(t--)
	{
		memset(cache, -1, sizeof(cache));
		tc++;
		cin >> n;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		int ans = dp(1, 0);
		cout << "Case #" << tc << ": " << ans;
		cout << endl;
	}
	return 0;
}