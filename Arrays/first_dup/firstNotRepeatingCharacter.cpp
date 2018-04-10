/*
Given a string s, find and return the first instance of a non-repeating character in it. If there is no such character, return '_'.
*/

char firstNotRepeatingCharacter(std::string s) {
    int n=s.length();
    int count[26]={0};
    for(int i=0;i<n;i++)
        count[s[i]-'a']++;
    
    for(int i=0;i<n;i++)
    {
        if(count[s[i]-'a']==1)
             return s[i];
        
    }
    return '_';
         
}
