/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 25/12/17              #                                  *
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
        LL x;
        cin>>x;
        LL r=0,sum=0;
        for(LL i=1;;i++)
        {
            r++;
             sum+=i;
             if(sum>=x)
                break;
        }
        cout<<r<<endl;
    }
}
