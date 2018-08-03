
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
          return a[i];
          break;
      }


    }
    if(t==0)
        return -1;
}

