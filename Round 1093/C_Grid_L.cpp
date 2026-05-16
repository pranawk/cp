//  C. Grid L

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        long long p, q;
        cin>>p>>q;
        long long tsq =2*(p+2*q)+1;
        long long ansx =-1, ansy =-1;
        bool fl = false;
        for(long long d = 3; d * d <= tsq; d+= 2){
            if(tsq% d== 0){
                long long n = (d-1)/2;
                long long m = (tsq/d-1)/ 2;
                if(n>=1 && m>=1){
                    if(q <= m*(n+1) && q <= n*(m + 1)){
                        ansx = n;
                        ansy = m;
                        fl = true;
                        break;
                    }
                }
            }
        }
        if(!fl) cout<<-1<<endl;
        else cout<<ansx<<" "<<ansy<<endl;
        }
    return 0;
}