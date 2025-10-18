#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int a,b;
        cin>>a>>b;
        string aa,bb;
        while(a>0){
            if(a%2==0)aa='0'+aa;
            else aa='1'+aa;
            a/=2;
        }
        while(b>0){
            if(b%2==0)bb='0'+bb;
            else bb='1'+bb;
            b/=2;
        }
        string s1;
        if(aa.size()<bb.size()){cout<<-1<<endl;continue;}
        cout<<2<<endl;
        int sd=aa.size()-bb.size();
        int ind= sd;
        while(sd--){bb='0'+bb;}
        int i=0;
        while(bb[i]!='1'){
            if(aa[i]=='0')s1+='0';
            else s1+='1';i++;
        }
        while(i<aa.size()){s1+='0';i++;}
        string s2;
        for(int i=ind; i<bb.size(); i++){
            if(aa[i]==bb[i]){
                s2+='0';
                }
            else{
                s2+='1';
            }
        }
        //cout<<s1<<endl<<s2;
        int a1=0;
        for(int i=0; i<s2.size(); i++){
            a1*=2;
            if(s2[i]=='1')a1+=1;
        }
        cout<<a1<<" ";
        int a2=0;
        for(int i=0; i<s1.size(); i++){
            a2*=2;
            if(s1[i]=='1')a2+=1;
        }
        cout<<a2<<endl;
    }
    return 0;
}