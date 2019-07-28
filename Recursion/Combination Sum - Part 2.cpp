// Source - GFG
// Link - https://practice.geeksforgeeks.org/problems/combination-sum-part-2/0

#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int flag;
set <vector<int>> s;

int sum(){
    int res = 0;
    for(int i=0; i<v.size(); i++){
        res += v[i];
    }
    return res;
}

void printPath(){
    cout<<"(";
    int i;
    for(i=0; i<v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<v[i]<<")";
}

void f(int n, int arr[], int k, int l){
    if(sum()==k && s.count(v)==0){
        s.insert(v);
        printPath();
        flag = 0;
    }
    else if(sum()>k || l>=n) return;
    else{
        for(int i=l; i<n; i++){
            v.push_back(arr[i]);
            f(n, arr, k, i+1);
            v.pop_back();
        }
    }
}

int main()
{   int t;
    cin>>t;
	while(t--){
	    int n, k;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    sort(arr, arr+n);
	    cin>>k;
	    v.clear();
	    s.clear();
	    flag = 1;
	    f(n, arr, k, 0);
	    if(flag) cout<<"Empty";
	    cout<<endl;
	}
	return 0;
}
