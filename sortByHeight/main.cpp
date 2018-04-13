#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
         cin>>a[i];
    int b[100],t=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1){
            b[t]=a[i];
            a[i]=0;
            t++;
        }

    }
    sort(b,b+t);
    t=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        {
            a[i]=b[t];
            t++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
