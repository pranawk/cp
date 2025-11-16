#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        int aa=static_cast<int>(sqrt(a));
        if(1ll*aa*aa!=a || aa==1){cout<<"NO"<<endl;continue;}
        bool fl=true;
        for(int i=2; i*i<=aa; i++){
            if(aa%i==0){fl=false;break;}
        }
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}