#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	std::vector<int> b(n);
	b[0]=a[0]==1?1:0;
	for(int i=1;i<n;i++){
		b[i]=a[i]==1?b[i-1]+1:b[i-1];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int temp=b[n-1]-b[j];
			if(i!=0)
				temp+=(j-i+1-(b[j]-b[i-1]));
			else temp+=(j-i+1-(b[j]));
			if(i!=0)
				temp+=b[i-1];
			ans=ans>temp?ans:temp;
			//std::cout<<temp<<std::endl;
		}
	}
	//if(n==1)ans=1;
	std::cout<<ans<<std::endl;
	return 0;
}