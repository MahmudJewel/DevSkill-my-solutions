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

                          ///not Accepted
main()
{
    LL t;
    cin>>t;
    while(t--)
    {
        LL a;
        cin>>a;
        LL box[a];
        for(LL i=0;i<a;i++)
        {
            cin>>box[i];
        }
        LL sum1=0,sum2=0,x=0,y=0;
        for(LL i=0;i<a;i++)
        {
            LL m=box[i]-x;
            if(m>=0)
            {
                sum1+=box[i];
                sum2+=m;
                x++;
            }
        }
        cout<<sum1<<" "<<sum2<<endl;
        cout<<sum1-sum2<<endl;
    }
}
