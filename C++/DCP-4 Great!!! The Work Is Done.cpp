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
    LL a,b;
    while(cin>>a>>b)
    {
        LL array[b];
        for(LL i=0;i<b;i++)
            cin>>array[i];
        LL sum=0;
        for(LL i=0;i<b;i++)
            sum+=array[i];
        LL result=1;
        LL t=sum;
        while(1)
        {
            if(t>=a)
            {
                if(result==1)
                cout<<"Project will finish within "<<result<<" day."<<endl;
                else
                    cout<<"Project will finish within "<<result<<" days."<<endl;
                break;
            }
            t+=sum;
            result++;
        }
    }
}
