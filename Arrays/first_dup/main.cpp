#include <bits/stdc++.h>

using namespace std;
int firstDuplicate(vector<int> a) {

    int n=a.size();

    int count[1000];
    for(int i=0;i<1000;i++)
         count[i]=0;
    int t=0;

    for(int i=0;i<n;i++)
    {   count[a[i]]++;

      if(count[a[i]]>1)
      {  t++;
          cout<<a[i];
          break;
      }


    }
    if(t==0)
        cout<<"-1";
}
int main()
{
    vector <int> b;
    b.push_back(2);
    b.push_back(4);
    b.push_back(3);
    b.push_back(5);
    b.push_back(1);
    firstDuplicate(b);
}
