function sortByHeight(arr) {
    let i=0;
    let y=[];
    let j=0;
    for(i=0;i<arr.length;i++)
        {
            if(arr[i]!= -1)
                {
                    y[j]=arr[i];
                    j++
                    
                }  
            
        }
    for(i=0;i<arr.length;i++)
        {
           if(arr[i]!= -1)
                {
                  arr[i]='X';   
                }   
            
        }
    var x = y.sort(function(a, b){return a - b});
     j=0;
    for(i=0;i<arr.length;i++)
        {
             if(arr[i]== 'X')
                 {
                 arr[i] = x[j];
                 j++;
                 }
            
        }

  
 return arr; 
}
