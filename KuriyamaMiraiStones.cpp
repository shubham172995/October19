#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<long long int> v(n), u(n);
	for(int i=0;i<n;i++){
		std::cin>>v[i];
		u[i]=v[i];
	}
	std::sort(u.begin(), u.end());
	for(int i=1;i<n;i++){
		u[i]=u[i]+u[i-1];
		v[i]=v[i]+v[i-1];
	}
	int m;
	scanf("%d", &m);
	for(int i=0;i<m;i++){
		int t, l, r;
		scanf("%d %d %d", &t, &l, &r);
		if(t==1){
			if(l==1)
				std::cout<<v[r-1]<<std::endl;
			else std::cout<<v[r-1]-v[l-2]<<std::endl;
		}
		else{
			if(l==1)
				std::cout<<u[r-1]<<std::endl;
			else std::cout<<u[r-1]-u[l-2]<<std::endl;
		}
	}
	return 0;
}