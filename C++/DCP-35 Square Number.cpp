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
    for(LL i=1;i<=t;i++)
    {
        LL a,b;
        cin>>a;
        b=sqrt(a);
        if(b*b==a)
            cout<<"Case "<<i<<": YES"<<endl;
        else
            cout<<"Case "<<i<<": NO"<<endl;

    }
}
