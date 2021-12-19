/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   CSE 13th, MBSTU              #                                  *
*                #   Date : 06/02/19              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double


main()
{
    LL t,sum1=0,sum2=0,l;
    S s;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        getline(cin,s);

        l=s.size();
        for(LL i=0;i<l;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
               {
                   sum1++;
                //cout<<s[i]<<endl;
                }
            else if(s[i]>'a' && s[i]<='z')
                sum2++;

        }
        LL a=l-sum1;
        LL b=l-sum2;
        cout<<min(a,b)<<endl;
        sum1=sum2=0;
        //cout<<s[l-1]<<endl;

    }
}
