#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
 
		sort(a.begin(), a.end());
		int mid = a[n / 2];
		long long ans = 0;
		for (int i = 0; i < n; i++)
			ans += abs(a[i] - mid);
		int cnt = a[n - 1] - a[0];
		cout << ans << ' ' << cnt << endl;
	}
	return 0;
}