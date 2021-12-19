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
    S s;
    char ch[100];
    cin>>s;
    LL l=s.size();
    for(LL i=0;i<l;i++)
        ch[i]=s[i];
    for(LL i=0;i<l;i++)
        cout<<ch[i];
}
