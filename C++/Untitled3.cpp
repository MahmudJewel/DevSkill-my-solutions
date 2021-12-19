/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 01/01/18              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define S string
#define D double
S rev(S s);
S add(S s1,S s2);

main()
{
    S s1,s2;
    while(cin>>s1>>s2)
    {
        S s3=add(s1,s2);
        cout<<s3<<endl;
    }
}

S add(S s1,S s2)
{
    s1=rev(s1);
    s2=rev(s2);
    LL l1,l2;
    l1=s1.size();
    l2=s2.size();
    if(l1<l2)
    {
        /*S sw=s1;
        s1=s2;
        s2=sw;*/
        swap(s1,s2);
        swap(l1,l2);
    }
    LL temp=0;
    S s3="";
     for(LL i=0;i<l2;i++)
     {
         LL a=s1[i]-'0';
         LL b=s2[i]-'0';
         LL c=a+b+temp;
         temp=c/10;
         c=c%10;
         s3+=(c+'0');
     }


     for(LL i=l2;i<l1;i++)
        {
            LL a=s1[i]-'0';
         //LL b=s2[i]-'0';
         LL c=a+temp;
         temp=c/10;
         c=c%10;
         s3+=(c+'0');
        }
        if(temp)
            s3+=(temp+'0');
     s3=rev(s3);
     return s3;
}

S rev(S s)
{
    LL l=s.size();
    S s2="";
    for(LL i=l-1;i>=0;i--)
    {
        s2+=s[i];
    }
    return s2;
}
