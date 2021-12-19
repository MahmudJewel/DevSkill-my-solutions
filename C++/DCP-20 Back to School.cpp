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
    for(LL i=1; i<=t; i++)
    {
        LL array[4];
        D r;
        cin>>array[0]>>array[1]>>r>>array[2]>>array[3];
        LL a=abs(array[0]-array[2]);
        a*=a;
        LL b=abs(array[1]-array[3]);
        b*=b;
        D result=sqrt(D(a)+D(b));
        cout<<"Case "<<i<<": ";
        if(result>r)
            cout<<"Outside"<<endl;
        else if(result==r)
            cout<<"OnCircle"<<endl;
        else if(result<r)
            cout<<"Inside"<<endl;

    }
}
