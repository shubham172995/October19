#include<bits/stdc++.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	std::string s;
	std::cin>>s;
	if(n==1){
		if(k)
			std::cout<<"0\n";
		else std::cout<<s<<std::endl;
		return 0;
	}
	if(s[0]>'1'){
		if(k){
			s[0]='1';
			--k;
		}
	}
	for(int i=1;i<n;i++){
		if(k==0)
			break;
		if(s[i]>'0'){
			s[i]='0';
			--k;
		}
	}
	std::cout<<s<<std::endl;
	return 0;
}