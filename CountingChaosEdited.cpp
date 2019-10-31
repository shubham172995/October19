#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	getc(stdin);
	map<string, string> a;
	a["00"]="00";a["01"]="10";
	a["02"]="20";a["03"]="30";
	a["04"]="40";a["05"]="50";
	a["06"]="no10";a["07"]="no10";
	a["08"]="no10";a["09"]="no10";
	a["10"]="01";a["11"]="11";
	a["12"]="21";a["13"]="31";
	a["14"]="41";a["15"]="51";
	a["16"]="no20";a["17"]="no20";
	a["18"]="no20";a["19"]="no20";
	a["20"]="02";a["21"]="12";
	a["22"]="22";a["23"]="32";
	while(n--){
		string s, ans="";
		getline(cin, s);
		string temp=a[s.substr(0, 2)];
		string t=s.substr(s.length()-2, 2);
		int ab, b;
		ab=temp[0]-'0';
		ab=ab*10+(temp[1]-'0');
		b=t[0]-'0';
		b=b*10+(t[1]-'0');
		//cout<<ab<<endl<<b<<endl;
		if(b<ab){
			ans=s.substr(0,3)+temp;
		}
		else{
			int c=s[0]-'0';
			c=c*10+(s[1]-'0');
			if(c==23)
				ans="00:00";
			else{
				++c;
				temp="";
				temp+=char('0'+(c/10));
				temp+=char('0'+(c%10));
				//cout<<temp<<" "<<a[temp]<<endl;
				if(a[temp][0]=='n'){
					ans+=a[temp].substr(2, 2);
					ans+=':';
					ans+=a[a[temp].substr(2, 2)];
				}
				else{
					ans+=temp;
					ans+=':';
					ans+=a[temp];
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}