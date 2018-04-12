function allLongestStrings(inputArray) {

    var max;
    var result = ['a'] ;
    var i=0;
    max = inputArray[0].length;
    for(let i=0;i<inputArray.length;i++)
        {
            if(inputArray[i].length > max)
                max=inputArray[i].length
        }
    for(let j=0;j<inputArray.length;j++)
        {
            if(inputArray[j].length == max)
              {
                  result[i]=inputArray[j];
                  i++;
              }  
                
        }
    
return result;
}
