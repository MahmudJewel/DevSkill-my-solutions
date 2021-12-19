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
    for(LL i=1;i<=t;i++)
    {
        LL a;
        cin>>a;
        a=a*3;
        cout<<"Case #"<<i<<": ";
        if(a%2==1)
        {
            a-=3;
            cout<<a+1<<" "<<a+2<<" "<<a+3<<endl;
        }
        else
            cout<<a<<" "<<a-1<<" "<<a-2<<endl;
    }
}
