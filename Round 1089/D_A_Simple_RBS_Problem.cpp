//  D. A Simple RBS Problem

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
        string a,b;
        cin>>a>>b;
        int duo_cn_a=0,duo_cn_b=0;
        string a1,b1;
        for(int i=0; i<n; ){
            if(a[i]=='(' && a[i+1]==')')i+=2;
            else a1+=a[i],i++;
        }
        for(int i=0; i<n; ){
            if(b[i]=='(' && b[i+1]==')')i+=2;
            else b1+=b[i],i++;
        }
        stack<char>st;
        unordered_map<int,int>mp1,mp2;
        for(int i=0; i<n; i++){
            if(a[i]==')'&& !st.empty() && st.top()=='('){st.pop();mp1[st.size()]++;}
            else st.push(a[i]);
        }
        for(int i=0; i<n; i++){
            if(b[i]==')'&& !st.empty() && st.top()=='('){st.pop();mp2[st.size()]++;}
            else st.push(b[i]);
        }
        if(a1.size()==b1.size()){
            bool fl=true;
            for(auto i: mp1){
                if(mp2[i.first]>0)continue;
                else fl=false;
            }
            for(auto i: mp2){
                if(mp1[i.first]>0)continue;
                else fl=false;
            }
            cout<<(fl==true ? "YES" : "NO");
        }
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}