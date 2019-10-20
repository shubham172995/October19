#include<bits/stdc++.h>
int main(){
	std::vector<int> a(5);
	int k;
	for(int i=0;i<5;i++)
		scanf("%d", &a[i]);
	scanf("%d", &k);
	bool flag=false;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(abs(a[j]-a[i])>k){
				flag=true;
				break;
			}
		}
	}
	if(!flag)
		std::cout<<"Yay!\n";
	else std::cout<<":(\n";
	return 0;
}