//  A. Creating Abbreviations

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,q;
        cin>>n>>q;
        unordered_set<char>st;
        for (int i=0; i<n; i++)
        {
            string temp;
            cin>>temp;
            st.insert(temp[0]-'a'+'A');
        }
        bool fl=true;
        for (int i=0; i<q; i++)
        {
            string temp;
            cin>>temp;
            for (int j=0; j<temp.size(); j++)if (st.find(temp[j])==st.end())fl=false;
        }
        cout<<(fl==true ? "YES": "NO")<<endl;
    }
    return 0;
}
