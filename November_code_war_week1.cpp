#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<string,int> &a,const pair<string,int> &b)
{
    return a.second>b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<pair<string,int>> vec;

        string str;
        int a;
        for(int i=0;i<n;i++)
        {
            cin>>str>>a;
            vec.push_back(make_pair(str,a));
        }

        sort(vec.begin(),vec.end(),comp);

        for(int i=0;i<n;i++)
        {
            cout<<vec[i].first<<"\n";
        }

    }

    return 0;
}