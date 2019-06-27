// source GeeksforGeeks

{
#include <bits/stdc++.h>
using namespace std;
 
int subsequenceCount(string S, string T);
//  Driver code to check above method
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		cout<<subsequenceCount(s,tt)<<endl;
	}  
}

/*This is a function problem.You only need to complete the function given below*/
/*You are required to complete this method*/
int subsequenceCount(string S, string T)
{
    int n = S.length();
    int m = T.length();
    int dp[m+1][n+1];
    for(int i=0; i<=m; i++)
        dp[i][0] = 0;
    for(int i=0; i<=n; i++)
        dp[0][i] = 1;
    int count =0;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if (T[i - 1] != S[j - 1]) 
                dp[i][j] = dp[i][j - 1];
            else
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1]; 
        }
    }
    return dp[m][n];
}
 
