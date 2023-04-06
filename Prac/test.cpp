#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 // your code goes here
	 int n,m;
	 cin>>n>>m;
	 string a,b;
	 cin>>a>>b;
	 map<char,int> mp;
	 for(int i=0; i<n; i++){
	     if(mp.find(a[i]) == mp.end()){
	         mp.insert({a[i],1});
	     }
	     else
	        mp[a[i]]++;
	 }
	 for(int i=0; i<m; i++){
	     if(mp.find(b[i]) == mp.end()){
	         mp.insert({b[i],1});
	     }
	     else
	        mp[b[i]]++;
	 }
	 int flag = 0;
	 for(auto it:mp){
	     if(it.second % 2 ==1){
	         ++flag;
	       //  if(flag > 1)
	       //     break;
	     }
	 }
	 if(flag == 1 || flag == 0)
	    cout<<"YES"<<endl;
	 else
	    cout<<"NO"<<endl;
	}
	return 0;
}