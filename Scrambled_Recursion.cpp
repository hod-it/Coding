#include<bits/stdc++.h>
using namespace std;

bool solve(string a,string b){
	if(a.compare(b) == 0) return true;
	if(a.size() <= 1) return false;
	int n=a.size();
	bool flag = false;

	for(int i=1;i<n;i++){
		if((solve(a.substr(0,i),b.substr(n-i,i)) == true && solve(a.substr(i,n-i),b.substr(0,n-i)) == true) || ((solve(a.substr(0,i),b.substr(0,i)) == true) && (solve(a.substr(n-i,i),b.substr(n-i,i)) == true)) ){
		       	flag = true;
			break;
		}
	}
return flag;	
}

int main(){
	string s="phqtrnilf";
	string p="ilthnqrpf";
	if(solve(s,p) == true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

