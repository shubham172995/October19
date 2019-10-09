#include<bits/stdc++.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<int> a(n), c(100005);
	std::vector<bool> b(100005);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	b[a[n-1]]=true;
	c[n-1]=1;
	for(int i=n-2;i>=0;i--){
		if(b[a[i]])
			c[i]=c[i+1];
		else{
			b[a[i]]=true;
			c[i]=c[i+1]+1;
		}
	}
	for(int i=0;i<m;i++){
		int temp;
		scanf("%d", &temp);
		printf("%d\n", c[temp-1]);
	}
	return 0;
}