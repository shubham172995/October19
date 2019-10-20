#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<long long int> a(5), b(6);
	long long int time=0, n;
	cin>>n;
	for(int i=0;i<5;i++)
		cin>>a[i];
	b[0]=n;
	while(b[5]<n){
		++time;
		b[5]+=b[4]>a[4]?(b[4]-a[4]):b[4];
		b[4]+=b[3]>a[3]?(b[3]-a[3]):b[3];
		b[3]+=b[2]>a[2]?(b[2]-a[2]):b[2];
		b[2]+=b[1]>a[1]?(b[1]-a[1]):b[1];
		b[1]+=b[0]>a[0]?(b[0]-a[0]):b[0];
	}
	cout<<time<<endl;
	return 0;
}