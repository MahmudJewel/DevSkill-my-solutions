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
        LL array[9];
        for(LL i=1;i<=8;i++)
        {
            cin>>array[i];
        }
        LL bangla1=array[1]+array[2];
        LL pak1=array[3]+array[4];
        LL bangla2=array[5]+array[6];
        LL pak2=array[7]+array[8];
        if(bangla1>pak1 && bangla2>pak2)
            cout<<"Banglawash"<<endl;
        else
            cout<<"Miss"<<endl;

    }
}
