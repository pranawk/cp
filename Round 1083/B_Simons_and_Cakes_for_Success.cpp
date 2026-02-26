//  B. Simons and Cakes for Success

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
        int ans=1;
        int ii=2;
        while(n>1 && ii*ii<=n){
            if(n%ii==0){
                ans*=ii;
                while(n%ii==0)n/=ii;
            }
            ii++;
        }
        cout<<ans*n<<endl;
    }
    return 0;
}