You are given an array of integers representing coordinates of obstacles situated on a straight line.

Assume that you are jumping from the point with coordinate 0 to the right. You are allowed only to make jumps of the same length represented by some integer.

Find the minimal length of the jump enough to avoid all the obstacles.

Example

For inputArray = [5, 3, 6, 7, 9], the output should be
avoidObstacles(inputArray) = 4.

Check out the image below for better understanding:

Input/Output

    [execution time limit] 4 seconds (js)

    [input] array.integer inputArray

    Non-empty array of positive integers.

    Guaranteed constraints:
    2 ≤ inputArray.length ≤ 1000,
    1 ≤ inputArray[i] ≤ 1000.

    [output] integer
        The desired length.

Soluton:
```javascript
function avoidObstacles(inputArray) {
   var input = inputArray.sort().slice();
   input.sort((a, b) => a - b);
  let  strikes=1;
    let i=0;
    for(i=0;i<=input[inputArray.length-1];i+=strikes)
    {
        for(let j=0;j<inputArray.length;j++)
        {
            if(i==input[j])
            {
                strikes++;
                i=0;
                break;
            }
        }
    }
    //if( i%strikes != 0)
      //  strikes += i/strikes;
  return strikes;  
   
}
