//  B. Nikita and Books

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
        long long mor=0;
        bool fl=true;
        int ii=1;
        for(int i=0; i<n; i++){
            if(a[i]<ii){
                if(a[i]+mor<ii){fl=false;break;}
                mor-=ii-a[i];
            }
            else{
                mor+=a[i]-ii;
            }
            ii++;
        }
        cout<<(fl==true ?"YES":"NO")<<endl;
    }
    return 0;
}