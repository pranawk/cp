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
        unordered_set<int>st;
        vector<int>nondup;
        vector<int>dup;
        unordered_set<int>dupin;
        for(int i=0; i<n; i++){
            int ii;
            cin>>ii;
            if(st.find(ii)!=st.end()){dup.push_back(ii);dupin.insert(i);}
            else {st.insert(ii);nondup.push_back(ii);}
        }
        for(int i=0; i<dup.size(); i++){
            int j=dup[i]%10;
            int jj=dup[i]/10;
            while(st.find(jj*10+j%10)!=st.end())j++;
            dup[i]=jj*10+j%10;
            st.insert(dup[i]);
        }
        cout<<dup.size()<<endl;
        int ii=0, j=0;
        for(int i=0; i<n; i++){
            if(dupin.find(i)!=dupin.end()){
                int pin=dup[ii];
                if(pin<10){cout<<"000";}
                else if(pin<100){cout<<"00";}
                else if(pin<1000)cout<<"0";
                cout<<dup[ii]<<endl;ii++;}
            else{
                int pin=nondup[j];
                if(pin<10){cout<<"000";}
                else if(pin<100){cout<<"00";}
                else if(pin<1000)cout<<"0";
                cout<<nondup[j]<<endl;j++;}
        }
     }
    return 0;
}