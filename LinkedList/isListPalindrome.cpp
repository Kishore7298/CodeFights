// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
bool isListPalindrome(ListNode<int> * l) {
  struct ListNode<int> *temp=l;
 string s[1000000]={""};
  
  int t=0;
  while(temp!=NULL){
    
   ostringstream convert;   // stream used for the conversion

   convert << temp->value;      // insert the textual representation of 'Number' in the characters in the stream

    s[t]= convert.str();
    t++;
    temp=temp->next;
}


   int m=--t;
   if(s[0]=="")
       return true;
   for(int i=0;i<=t/2;i++){
      
      if(s[i]!=s[m])
           return false;
      m--;
   }
   return true;
}
