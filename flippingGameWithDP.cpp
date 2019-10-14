#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n), b(n);
	int ans=0;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]==0)
			b[i]=1;
		else{
			ans+=1;
			b[i]=-1;
		}
	}
	int gain=b[0], temp=b[0];
	for(int i=1;i<n;i++){
		temp=b[i]>(b[i]+temp)?b[i]:(b[i]+temp);
		gain=temp>gain?temp:gain;
	}
	std::cout<<ans+gain<<std::endl;
	return 0;
}