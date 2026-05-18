//  B. Remilia Plays Soku

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,x1,x2,k;
        cin>>n>>x1>>x2>>k;if(n<4){cout<<1<<endl;continue;}
        cout<<k+min(abs(x1-x2),(n-max(x1,x2)+min(x1,x2)))<<endl;;
    }
    return 0;
}