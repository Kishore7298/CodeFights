bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
   string a=crypt[0];
   string b=crypt[1];
   string c=crypt[2];
   string num1= "";

   for(int i=0;i<a.length();i++)
   { 
         for(int j=0;j<solution.size();j++)
         {  
            if(a[i]==solution[j][0])
            {  
               
               num1+=solution[j][1];
               
            }
            
           
         }
      
   }
   
   string num2="";
      for(int i=0;i<b.length();i++)
   { 
         for(int j=0;j<solution.size();j++)
         {  
            if(b[i]==solution[j][0])
            {
               num2+=solution[j][1];
            }
            
           
         }
      
   }

     string num3="";
      for(int i=0;i<c.length();i++)
   { 
         for(int j=0;j<solution.size();j++)
         {  
            if(c[i]==solution[j][0])
            {
               num3+=solution[j][1];
            }
            
           
         }
      
   }
   
   
   if(num1[0]=='0' &&  num1.length()>1 )
       return false;
   if(num2[0]=='0' && num2.length()>1)
       return false;
   if(num3[0]=='0' && num3.length()>1 )
       return false;
    if(num1[0]=='0' && num2[0]=='0' &&num3[3]=='0')
       return true;
   long long int adi=stoll(num1);
   long long int tya=stoll(num2);
   long long int pai=stoll(num3);
   cout<<adi<<" "<<tya<<" "<<pai;
   if(adi+tya==pai)
      return true;
   else
       return false;
      
    
  
}