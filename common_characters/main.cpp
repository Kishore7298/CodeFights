#include <iostream>

using namespace std;

int main()
{
    int count1[26]={0},count2[26]={0};
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        count1[s1[i]-'a']++;
    }
    for(int j=0;j<s2.length();j++)
    {
        count2[s2[j]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
      int minimum=min(count1[i],count2[i]);
      count=count+minimum;

    }
    cout<<count;
    return 0;
}
