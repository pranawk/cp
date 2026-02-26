//  B. Modulo Equality

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
        int ii=a[0];
        cout<<n<<" ";
        for(int i=1; i<n;i++){
            if(a[i]==n)cout<<ii<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}