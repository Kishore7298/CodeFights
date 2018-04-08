function adjacentElementsProduct(inputArray) {
    var i=0;
    var max=max = inputArray[0]*inputArray[1];;
    while(i<inputArray.length)
     {
          
         if(inputArray[i-1]*inputArray[i] > max)
          {
               max = inputArray[i-1]*inputArray[i];  
          } 
         i++;
     }
    return max; 
}
