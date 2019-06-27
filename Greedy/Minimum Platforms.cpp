// Source GeeksforGeeks

#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int dep[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    for(int i=0; i<n; i++)
	        cin>>dep[i];
	    sort(arr, arr+n);
	    sort(dep, dep+n);
	    int i=1, j=0;
	    int platform = 1;
	    int ans =1;
	    while(i<n && j<n){
	        if(arr[i]<=dep[j]){
	            platform++;
	            i++;
	            if(platform>ans) ans = platform;
	        }        
	        else {
	            platform--;
	            j++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
