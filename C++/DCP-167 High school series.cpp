#include<bits/stdc++.h>
using namespace std;
#define LL long long

main()
{
    LL t,n,temp;
    cin>>t;
    for(LL i=1; i<=t; i++)
    {
        cin>>n;
        temp=pow(n*(n+1),2)/4;
        cout<<"Case "<<i<<": "<<temp<<endl;
    }
}

