Given a rectangular matrix of characters, add a border of asterisks(*) to it.

Example

For
```
picture = ["abc",
           "ded"]
```
the output should be
```
addBorder(picture) = ["*****",
                      "*abc*",
                      "*ded*",
                      "*****"]
```
Input/Output

    [execution time limit] 4 seconds (js)

    [input] array.string picture

    A non-empty array of non-empty equal-length strings.

    Guaranteed constraints:
    1 ≤ picture.length ≤ 100,
    1 ≤ picture[i].length ≤ 100.

    [output] array.string

    The same matrix of characters, framed with a border of asterisks of width 1.

Code:
```
function addBorder(picture) {
 var arr = [];
 var result=[];
 var stars='';
 var j=0;
 var pictureLength =picture[0].length;
 for(i=0;i<pictureLength+2;i++)
       {
        stars=stars+'*';
       }
 for(let i=0;i<picture.length;i++)
  {
       
     arr[i]= '*'+picture[i]+'*';     
  }
 for(i=0;i<picture.length+2;i++)
  {
   if(i==0||i>picture.length)
     result[i]=stars;
   else
    {
     result[i]= arr[j];
     j++;
    }
    
  }
 return result;
}
