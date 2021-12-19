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
    for(LL j=1; j<=t; j++)
    {
        LL n,sum=0;
        S s;
        cin>>n>>s;
        for(LL i=0; i<n-1; i++)
        {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
            {
                LL v=0;
                if(s[i+1]=='a')
                    v=1;
                else if(s[i+1]=='e')
                    v=1;
                else if(s[i+1]=='i')
                    v=1;
                else if(s[i+1]=='o')
                    v=1;
                else if(s[i+1]=='u')
                    v=1;
                if(v==0)
                    sum++;
            }
        }

        if (s[n-1]=='a' || s[n-1]=='e' || s[n-1]=='i' || s[n-1]=='o' || s[n-1]=='u' )
        {
            LL v=0;
            if(s[n-2]=='a')
                v=1;
            else if(s[n-2]=='e')
                v=1;
            else if(s[n-2]=='i')
                v=1;
            else if(s[n-2]=='o')
                v=1;
            else if(s[n-2]=='u')
                v=1;
            if(v==0)
                sum++;
        }

        cout<<"Case "<<j<<": "<<sum<<endl;
    }
}
