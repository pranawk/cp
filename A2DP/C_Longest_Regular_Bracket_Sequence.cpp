//  C. Longest Regular Bracket Sequence

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=s.size();
    vector<int>bb(n,0);
    stack<pair<char,int>>st;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='(')
        {
            // bb[i]=bb[i-1];
            if (i==0)st.push({s[i],0});
            else st.push({s[i],bb[i-1]});
        }
        else if (!st.empty()&& s[i]==')' && st.top().first=='(')
        {
            bb[i]=2+bb[i-1]+st.top().second;
            st.pop();
        }
    }
    int mx=*max_element(bb.begin(),bb.end());
    int mxc=0;
    for (int i=0; i<n; i++){if (bb[i]==mx)mxc++;}
    if (mx==0)
    {
        cout<<"0 1";
        return 0;
    }
    cout<<mx<<" "<<mxc;
    return 0;
}
