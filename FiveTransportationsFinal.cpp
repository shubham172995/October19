#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<long long int> a(5);
	long long int n, m;
	cin>>n;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	m=min(a[0], a[1]);
	for(int i=2;i<5;i++)
		m=min(m, a[i]);
	long long int ans=ceil((double)n/m);
	ans+=4;
	cout<<ans<<endl;
	return 0;
}