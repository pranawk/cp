//  C. Divisibility by Eight

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    unordered_set<int>c1,c2;
    for(int i=0; i<s.size(); i++){
        int a=s[i]-'0';
        for(auto i:c2){
            int b=i;
            if((b*10+a)%8==0){
                cout<<"YES"<<endl;
                cout<<(b*10+a);
                return 0;
            }
        }
        for(auto i:c1){
            int b=i;
            if((b*10+a)%8==0){
                cout<<"YES"<<endl;
                cout<<(b*10+a);
                return 0;
            }
            c2.insert(b*10+a);
        }
        if(a%8==0){
            cout<<"YES"<<endl;
            cout<<a;
            return 0;
        }
        c1.insert(a);
    }
    cout<<"NO";
    return 0;
}