//  C1. We Be Flipping (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int neg=1;
        vector<int>seq;
        for(int i=n-1; i>=0; i--){
            if(a[i]*neg>0){
                neg*=-1;
                seq.push_back(i+1);
            }
        }
        cout<<seq.size()<<endl;
        for(int i=0; i<seq.size(); i++)cout<<seq[i]<<" ";
        cout<<endl;
    }
    return 0;
}