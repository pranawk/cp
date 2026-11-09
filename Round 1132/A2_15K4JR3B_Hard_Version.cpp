//  A2. 15K4JR3B (Hard Version)

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
        vector<long long>a(n);
        int temp;
        for(int i=0; i<n; i++){cin>>temp; a[i]= (1ll<<temp);}
        sort(a.begin(),a.end());
        long long sm= accumulate(a.begin(),a.end(),0);
//         long long aa=0;
        long long s1=0;
        for(int i=n-1; i>=0; i--){
            if(2*(s1+a[i]) <= sm) s1+=a[i];
        }
        cout<<s1*(sm-s1)<<endl;
    }
    return 0;
}