//source Geeksforgeeks
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int m =0;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        m = max(m, arr[i]);
	    }    
	    int hash[m+1] = {0};
	    for(int i=0; i<n; i++){
	        hash[arr[i]]++;
	    }
	    int j=0;
	    for(int i=0; i<m+1; i++){
	        if(hash[i]){
	            hash[i]=j;
	            j++;
	        }
	    }
	    for(int i=0; i<n; i++){
	        cout<<hash[arr[i]]<<" ";
	    }
        cout<<endl;
	}
	return 0;
}
