/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 26/12/17              #                                  *
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
        LL a;
        cin>>a;
        if(a==0)
            cout<<1<<endl;
        else
        {
            LL b=0;
            while(a)
            {
                a/=10;
                b++;
            }
            cout<<b<<endl;
        }
    }
}
