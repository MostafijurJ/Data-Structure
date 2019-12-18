#include <iostream>
using namespace std;

int main()
{
    int a[605][605];
    int r,c;
    cin>>r>>c;
    if(r==1 && c==1)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++)
            {
                if(c!=1)
                {
                    a[i][j]=(r+j)*i;
                }
                else
                {
                    a[i][j]=i+1;
                }
            }
        }

        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

