function sortByHeight(arr) {
var i=0, j=1;
   var n=arr.length;
   var temp;
   while(i<n-1)
      while(j<n-1)
         {
            if(arr[i]==-1)
               {i++;
                j++;
               break;}
            else if(arr[j]==-1)
               {
                  j++;
               }
            if(arr[i]>arr[j])
               {
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
                  i++;
                  j++;
               }
       
         }
   
    return arr;
}
