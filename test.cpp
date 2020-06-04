#include <bits/stdc++.h>

using namespace std;

void decode(){
	int n, s1=0, s2=0;
	cin >> n;
	s2=n%10;
	while(n!=0){
		s1=n%10;
		n/=10;
	}
	cout << s1+s2 << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		decode();
	return 0;
}
