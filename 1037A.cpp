#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
        int n; cin>>n;
        int res=9;
        while(n){
            res=min(res,n%10);
            n/=10;
        }
        cout<<res<<'\n';
    }
return 0;
}
