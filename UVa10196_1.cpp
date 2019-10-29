#include<bits/stdc++.h>
using namespace std;
vector<vector<char> > c(8);

bool check(pair<int, int> k, char ch){
	if(ch=='a'){
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(c[i][j]=='.'||(c[i][j]>='a'&&c[i][j]<='z'))
					continue;
				if(c[i][j]=='P'){
					if(k.first==i-1&&(k.second==j-1||k.second==j+1))
						return true;
				}
				else if(c[i][j]=='R'){
					for(int l=j-1;l>=0;l--){
						if(c[i][l]!='.'&&(i!=k.first||l!=k.second))
							break;
						if(i==k.first&&l==k.second)
							return true;
					}
					for(int l=j+1;l<8;l++){
						if(c[i][l]!='.'&&(i!=k.first||l!=k.second))
							break;
						if(i==k.first&&l==k.second)
							return true;
					}
					for(int l=i-1;l>=0;l--){
						if(c[l][j]!='.'&&(l!=k.first||j!=k.second))
							break;
						if(l==k.first&&j==k.second)
							return true;
					}
					for(int l=i+1;l<8;l++){
						if(c[l][j]!='.'&&(l!=k.first||j!=k.second))
							break;
						if(l==k.first&&j==k.second)
							return true;
					}
				}
				else if(c[i][j]=='N'){
					if((abs(i-k.first)==1&&abs(j-k.second)==2)||(abs(i-k.first)==2&&abs(j-k.second)==1))
						return true;
				}
				else if(c[i][j]=='K'){
					if((abs(i-k.first)==1&&j==k.second)||(abs(j-k.second)==1&&i==k.first))
						return true;
					if(abs(i-k.first)==1&&abs(j-k.second)==1)
						return true;
				}
				else if(c[i][j]=='B'){
					for(int m=i-1;m>=0;m--)
						for(int l=j-1;l>=0;l--){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i-1;m>=0;m--)
						for(int l=j+1;l<8;l++){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i+1;m<8;m++)
						for(int l=j-1;l>=0;l--){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i+1;m<8;m++)
						for(int l=j+1;l<8;l++){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
				}
				else if(c[i][j]=='Q'){
					for(int m=i-1;m>=0;m--)
						for(int l=j-1;l>=0;l--){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i-1;m>=0;m--)
						for(int l=j+1;l<8;l++){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i+1;m<8;m++)
						for(int l=j-1;l>=0;l--){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i+1;m<8;m++)
						for(int l=j+1;l<8;l++){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int l=j-1;l>=0;l--){
						if(c[i][l]!='.'&&(i!=k.first||l!=k.second))
							break;
						if(i==k.first&&l==k.second)
							return true;
					}
					for(int l=j+1;l<8;l++){
						if(c[i][l]!='.'&&(i!=k.first||l!=k.second))
							break;
						if(i==k.first&&l==k.second)
							return true;
					}
					for(int l=i-1;l>=0;l--){
						if(c[l][j]!='.'&&(l!=k.first||j!=k.second))
							break;
						if(l==k.first&&j==k.second)
							return true;
					}
					for(int l=i+1;l<8;l++){
						if(c[l][j]!='.'&&(l!=k.first||j!=k.second))
							break;
						if(l==k.first&&j==k.second)
							return true;
					}
				}
			}
		}
		return false;
	}
	else if(ch=='A'){
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(c[i][j]=='.'||(c[i][j]>='A'&&c[i][j]<='Z'))
					continue;
				if(c[i][j]=='p'){
					if(k.first==i+1&&(k.second==j-1||k.second==j+1))
						return true;
				}
				else if(c[i][j]=='r'){
					for(int l=j-1;l>=0;l--){
						if(c[i][l]!='.'&&(i!=k.first||l!=k.second))
							break;
						if(i==k.first&&l==k.second)
							return true;
					}
					for(int l=j+1;l<8;l++){
						if(c[i][l]!='.'&&(i!=k.first||l!=k.second))
							break;
						if(i==k.first&&l==k.second)
							return true;
					}
					for(int l=i-1;l>=0;l--){
						if(c[l][j]!='.'&&(l!=k.first||j!=k.second))
							break;
						if(l==k.first&&j==k.second)
							return true;
					}
					for(int l=i+1;l<8;l++){
						if(c[l][j]!='.'&&(l!=k.first||j!=k.second))
							break;
						if(l==k.first&&j==k.second)
							return true;
					}
				}
				else if(c[i][j]=='n'){
					if((abs(i-k.first)==1&&abs(j-k.second)==2)||(abs(i-k.first)==2&&abs(j-k.second)==1))
						return true;
				}
				else if(c[i][j]=='k'){
					if((abs(i-k.first)==1&&j==k.second)||(abs(j-k.second)==1&&i==k.first))
						return true;
					if(abs(i-k.first)==1&&abs(j-k.second)==1)
						return true;
				}
				else if(c[i][j]=='b'){
					for(int m=i-1;m>=0;m--)
						for(int l=j-1;l>=0;l--){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i-1;m>=0;m--)
						for(int l=j+1;l<8;l++){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i+1;m<8;m++)
						for(int l=j-1;l>=0;l--){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i+1;m<8;m++)
						for(int l=j+1;l<8;l++){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
				}
				else if(c[i][j]=='q'){
					for(int m=i-1;m>=0;m--)
						for(int l=j-1;l>=0;l--){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i-1;m>=0;m--)
						for(int l=j+1;l<8;l++){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i+1;m<8;m++)
						for(int l=j-1;l>=0;l--){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int m=i+1;m<8;m++)
						for(int l=j+1;l<8;l++){
							if(c[m][l]!='.'&&(m!=k.first||l!=k.second))
								break;
							if(m==k.first&&l==k.second)
								return true;
						}
					for(int l=j-1;l>=0;l--){
						if(c[i][l]!='.'&&(i!=k.first||l!=k.second))
							break;
						if(i==k.first&&l==k.second)
							return true;
					}
					for(int l=j+1;l<8;l++){
						if(c[i][l]!='.'&&(i!=k.first||l!=k.second))
							break;
						if(i==k.first&&l==k.second)
							return true;
					}
					for(int l=i-1;l>=0;l--){
						if(c[l][j]!='.'&&(l!=k.first||j!=k.second))
							break;
						if(l==k.first&&j==k.second)
							return true;
					}
					for(int l=i+1;l<8;l++){
						if(c[l][j]!='.'&&(l!=k.first||j!=k.second))
							break;
						if(l==k.first&&j==k.second)
							return true;
					}				}
			}
		}
		return false;
	}
}

int main(){
	for(int i=0;i<8;i++)
		c[i].resize(8);
	int nGame=0;
	while(1){
		++nGame;
		pair<int, int> k, K;
		int dots=0;
		for(int i=0;i<8;i++)
			for(int j=0;j<8;j++){
				cin>>c[i][j];
				if(c[i][j]=='.')
					++dots;
				if(c[i][j]=='k'){
					k.first=i;
					k.second=j;
				}
				if(c[i][j]=='K'){
					K.first=i;
					K.second=j;
				}
			}
		if(dots==64)
			break;
		if(check(k, 'a'))
			cout << "Game #" << nGame << ": black king is in check.";
		else if(check(K, 'A'))
			cout << "Game #" << nGame << ": white king is in check.";
		else cout << "Game #" << nGame << ": no king is in check.";
		cout << endl;
	}
	return 0;
}