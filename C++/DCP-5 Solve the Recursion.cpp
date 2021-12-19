/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 17/01/18              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double
LL recur(LL a,LL b, LL c);

main()
{
    LL a,b,c;
    while(cin>>a>>b>>c)
    {
        LL result=recur(a,b,c);
        cout<<result<<endl;
    }
}

LL recur(LL a,LL b, LL c)
{
    if(a>b && a>c)
        return (a-1,b,c);
    else if(b>a && b>c)
        return recur(a,b-1,c);
    else if(c>a && c>b)
        return recur(a,b,c-1);
    else
     return (a+b+c);
}
