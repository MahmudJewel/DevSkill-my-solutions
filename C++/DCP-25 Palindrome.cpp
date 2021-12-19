/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 23/12/17              #                                  *
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
        S s1,s="";

        cin>>s1;
        LL l=s1.size();
        for(LL i=0;i<l;i++)
        {
            s+=tolower(s1[i]);
        }
        bool c=true;
        for(LL i=0;i<=l/2;i++)
        {
            if(s[i]!=s[l-1-i])
            {
                c=false;
                cout<<"No"<<endl;
                break;
            }
        }
        if(c)
            cout<<"Yes"<<endl;
    }
}
