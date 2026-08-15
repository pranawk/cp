#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cz=0,co=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0')cz++;
        else co++;
    }
    if(co!=cz){
        cout<<1<<endl<<s;return 0;
    }
    cout<<min(n, 2)<<endl;
    cout<<s[0]<<" ";
    for(int i=1; i<n; i++)cout<<s[i];
    return 0;
}