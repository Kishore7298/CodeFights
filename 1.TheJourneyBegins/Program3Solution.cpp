#include<string.h>
bool checkPalindrome(std::string inputString) {
 int length;
  length= inputString.length();
 
  int j= length-1;
  
 for(int i=0;i<=length/2;i++)
 {
    if(inputString[i]!=inputString[j])
     return false;
  j--;
   
   
 }
 return true;
}
