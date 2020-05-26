#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100];
	for(int i = 0; i < 3; i++){
		cin >> a[i];
	}
	sort(a, a+3);
	cout << a[2]-a[0] << "\n";
	return 0;
}