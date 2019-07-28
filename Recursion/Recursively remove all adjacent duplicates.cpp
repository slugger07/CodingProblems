// Source - GFG
// Link - https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates/0

#include<bits/stdc++.h>
using namespace std;

string f(string s){
    if(s.length()==0) return s;
    string res = "";
    int flag = 0, recFlag = 0;
    char ch = s[0];
    for(int i=1; i<s.length(); i++){
        if(s[i]!=ch){
            if(flag == 0)
                res += ch;
            ch = s[i];
            flag = 0;
        }
        else {
            recFlag = 1;
            flag = 1;
        }
    }
    if(flag==0) res+= ch; 
    if(recFlag) res = f(res);
    return res;
}

int main()
{   int t;
    cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<f(s)<<endl;
	}
	return 0;
}
