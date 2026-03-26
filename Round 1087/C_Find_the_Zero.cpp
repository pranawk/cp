//  C. Find the Zero

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
        int o;
        cout.flush();
        bool fl=false;
        int i=3;
        int pp=n-1;
        while(pp--){
            cout<<"? "<<i<<" "<<i+1<<endl;
            cin>>o;
            if(o==1){fl=true;cout<<"! "<<i<<endl;break;}
            i+=2;
            if(fl==true)break;
        }
        if(fl==false){
            cout<<"? 1 3"<<endl;
            cin>>o;
            if(o==1)cout<<"! 1"<<endl;
            else {
                cout<<"? 1 4"<<endl;
                cin>>o;
                if(o==1)cout<<"! 1"<<endl;
                else cout<<"! 2"<<endl;
            }
        }
    }
    return 0;
}