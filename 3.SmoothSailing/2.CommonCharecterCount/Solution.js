function commonCharacterCount(s1, s2) {
     var temp=[];
     var count=0;
     for(let i=0;i< s1.length; i++)
          for(j=0;j<s2.length;j++)
               {
                    if(s1[i]==s2[j] && temp[j]!=true)
                      {
                           temp[j]= true;
                           count++
                           break;
                      }
               }
return count;
}
