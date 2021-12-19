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
S upper="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
S lwr  ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        S s;
        cin>>s;
        LL l=s.size();
        for(LL i=0;i<l;i++)
        {
            for(LL j=0;j<52;j++)
            {
                if(s[i]==upper[j])
                {
                    cout<<lwr[j];
                    break;
                }
            }
        }
        cout<<endl;
    }
}
