/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 01/01/18              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        S s;
        cin>>s;
        LL l=s.size();
        LL a=s[l-1]-'0';
        if(a%2==0)
            cout<<"Even"<<endl;
        else
            cout<<"Odd"<<endl;

    }
}
