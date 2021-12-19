/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   CSE 13th, MBSTU              #                                  *
*                #   Date : 06/02/19              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    LL b,s,g,t;
    cin>>t;
    while(t--)
    {
        cin>>b>>s>>g;
        LL sum=b*10+50*s+100*g;
        cout<<sum<<endl;
    }
}
