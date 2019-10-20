#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a(5);
	for(int i=0;i<5;i++)
		scanf("%d", &a[i]);
	vector<pair<int, int> > b(5);
	for(int i=0;i<5;i++){
		b[i]=make_pair(a[i]%10, a[i]);
	}
	sort(b.begin(), b.end());
	int time=0;int j=0;
	while(b[j].first==0){
		time+=b[j].second;
		++j;
	}
	for(int i=4;i>j;i--){
		time+=b[i].second+(10-b[i].first);
	}
	time+=b[j].second;
	cout<<time<<endl;
	return 0;
}