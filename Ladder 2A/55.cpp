//Oath of the Night's Watch
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    int x=a[0],y=a[n-1];
    int i=0,j=n-1;
    while(a[i]==x)i++;
    while(a[j]==y)j--;
    if(i>j)cout<<0<<endl;
    else cout<<j-i+1<<endl;
return 0;}