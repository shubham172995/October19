#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	int ans=0;
	std::vector<int> a(1440);
	for(int i=0;i<n;i++){
		int h, m;
		scanf("%d %d", &h, &m);
		int temp=(h*60)+m;
		++a[temp];
		ans=ans>a[temp]?ans:a[temp];
	}
	std::cout<<ans<<std::endl;
	return 0;
}