#include <iostream>

using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t>0)
    {
        long a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        long max=0;
        long x=0,y=0;
        if(a>=b && a>=c)
        {
            max=a;
            x=b;
            y=c;
        }
        if(b>=a && b>=c)
        {
            max=b;
            x=a;
            y=c;
        }
        if(c>=b && c>=a)
        {
            max=c;
            x=b;
            y=a;
        }
            if(max==x+y||(a==b && c%2==0)||(b==c && a%2==0)||(a==c && b%2==0))
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
        t--;
    }
    return 0;
}