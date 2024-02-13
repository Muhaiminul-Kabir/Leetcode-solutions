class Solution {
public:


    bool isPal(string s){
        int f = 0;
        int l = s.length()-1;
        while(f<l){
            if(s[f] != s[l]){
                return false;
            }
            f++;
            l--;
            
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
       for(auto i : words){
           if(isPal(i)){
               return i;
           }
       }
       return ""; 
    }
};
