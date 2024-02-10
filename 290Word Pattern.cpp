class Solution {
public:
    bool wordPattern(string pattern, string s) {
       unordered_map<string,char> word;
       unordered_map<char,string> ch;
       string temp = "";
       vector<pair<string,char>> t;
       
        
       int cdx = 0;
       int stcnt = 0;
       for(int i = 0; i< s.length();i++){
           
           if(s[i] == ' ' || i == s.length()-1){
               if(i == s.length()-1) temp += s[i];
               t.push_back({temp,pattern[cdx]});
               temp = "";
               cdx++;
               stcnt++;
            
           }else temp += s[i];
       }
       if(stcnt != pattern.length()) return false;
       
       for(const auto& i : t){
           if(word.find(i.first)!= word.end() && word[i.first]!= i.second){
               return false;
           }
           if(ch.find(i.second)!= ch.end() && ch[i.second]!= i.first){
               return false;
           }
           word[i.first] = i.second;
           ch[i.second] =i.first;
       }
       

       return  true;

    }
};
