#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<long int> b(n);
	for(int i=0;i<n;i++){
		std::cin>>b[i];
	}
	long long int ans=0;
	std::sort(b.begin(), b.end());
	long int j=1, k=n;
	for(int i=0;i<n;i++){
		ans+=abs(i+1-b[i]);
	}
	std::cout<<ans<<std::endl;
	return 0;
}