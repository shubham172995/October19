#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<long long int> a(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	std::vector<bool> is_prime(1000005, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i < 1000005; i++) {
    	if (is_prime[i] && (long long)i * i <= 1000005) {
        	for (int j = i * i; j <= 1000005; j += i)
            	is_prime[j] = false;
    	}
	}
	for(int i=0;i<n;i++){
		long long int m=sqrt(a[i]);
		if(m*m!=a[i])
			printf("NO\n");
		else{
			if(is_prime[m])
				printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}