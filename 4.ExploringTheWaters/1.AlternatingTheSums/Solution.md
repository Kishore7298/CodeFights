Several people are standing in a row and need to be divided into two teams. The first person goes into team 1, the second goes into team 2, the third goes into team 1 again, the fourth into team 2, and so on.

You are given an array of positive integers - the weights of the people. Return an array of two integers, where the first element is the total weight of team 1, and the second element is the total weight of team 2 after the division is complete.

Example

For a = [50, 60, 60, 45, 70], the output should be
alternatingSums(a) = [180, 105].

Input/Output

    [execution time limit] 4 seconds (js)

    [input] array.integer a

    Guaranteed constraints:
    1 ≤ a.length ≤ 10,
    45 ≤ a[i] ≤ 100.

    [output] array.integer

Code:
```
function alternatingSums(a) {
    var result = [];
    var team1 =[];
    var team2=[];
    var sum=0;
    var res=0;
    //a = a.toString();
    var j=0;
   for(let i=0;i<a.length;i=i+2)
      {
          team1[j]= a[i];
          j++;
      }
    for(i=0;i<team1.length;i++)
        {
            sum += team1[i];
        }
    result[0] = sum;
     var j=0;
   for(let i=1;i<a.length;i=i+2)
      {
          team2[j]= a[i];
          j++;
      }
    for(i=0;i<team2.length;i++)
        {
            res += team2[i];
        }
    result[1] = res;
    return result;
     
}
