//Source Geeks for Geeks

#include<bits/stdc++.h>
using namespace std;

int f(int arr[], int i, int j){
    if(i>j) return 0;
    if(arr[i]==arr[j]) return f(arr, i+1, j-1);
    if(arr[i]>arr[j]){
        arr[j-1] = arr[j-1] + arr[j];
        return 1 + f(arr, i, j-1);
    }
    if(arr[i]<arr[j]){
        arr[i+1] = arr[i+1] + arr[i];
        return 1 + f(arr, i+1, j);
    }
}

int main()
{   int t;
    cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    cout<<f(arr, 0, n-1)<<endl;
	}
	return 0;
}
