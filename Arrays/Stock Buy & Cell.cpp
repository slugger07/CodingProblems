// Stock Buy & Sell: Source GeekforGeeks

#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
	while(t--){
	    int n; 
	    cin>>n;
	    int arr[n];
	    int flag =0;
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    int tempIndex = 0;
	    int i=1;
	    while(i<n-1){
	        if(arr[i] < arr[i-1] && i-1 != tempIndex){
	           cout<<"("<<tempIndex<<" "<<i-1<<")"<<" ";
	           flag = 1;
	           tempIndex = i;
	        } 
	        else if(arr[i] < arr[i-1]) tempIndex = i;
	        i++;
	    }
	    if(arr[i]>arr[i-1]){
	        flag =1;
	        cout<<"("<<tempIndex<<" "<<i<<")"<<" "; 
	    } 
	    else if(n>2 && arr[i]<arr[i-1] && arr[i-1]>arr[i-2]){
	        flag =1;
	        cout<<"("<<tempIndex<<" "<<i-1<<")"<<" "; 
	    }
	  
	    if(flag==0) cout<<"No Profit";
	     cout<<endl;
	     
	}
	return 0;
}
