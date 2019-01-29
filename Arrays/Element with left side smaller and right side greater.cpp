//Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

//Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
	while(t--){
	    int n, flag=0;
	    cin>>n;
	    int arr[n];
	    int a2[n], a1[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    a1[0] = arr[0];
	    a2[n-1] = arr[n-1];
	    for(int i=1; i<n; i++)
	        a1[i] = max(a1[i-1], arr[i]);
	    for(int i =n-2; i>=0; i--)
	        a2[i] = min(arr[i], a2[i+1]);
	    for(int i=1; i<n-1; i++){
	        if((arr[i]>=a1[i] && arr[i]<=a2[i])){
	            cout<<arr[i]<<endl;
	            flag =1;
	            break;
	        }
	    }
	    if(flag==0) cout<<-1<<endl;
    }
	return 0;
}
