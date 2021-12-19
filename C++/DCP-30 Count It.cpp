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
        S s;
        char ch[100];
        cin>>s;
        LL c=s.size();
        for(LL i=0;i<c;i++)
            ch[i]=s[i];
        sort(ch,ch+c);
        for(LL i=0;i<c;i++)
            cout<<ch[i];
        cout<<endl;
        LL a=1;
        for(LL i=0; i<c-2; i++)
        {


            if(ch[i]==ch[i+1])
                a++;
            else
            {
                cout<<ch[i]<<" "<<a<<endl;
                a=1;
            }

            if(i==c-2)
            {
                if(ch[c-2]!=ch[c-1])
                    a++;
                 cout<<ch[i]<<" "<<a<<endl;

            }
        }
    }

}

