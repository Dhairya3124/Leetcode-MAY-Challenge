class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.size();
        vector<int>charcount(26,0);
        for(char c:p)
        {
            charcount[c-'a']++;
        }
        vector<int>result;
        vector<int>count(26,0);
        for(int i=0;i<s.length();i++)
        {
            count[s[i]-'a']++;
            if(i>=n)
            {
                count[s[i-n]-'a']--;
            }
            if(count==charcount)
                result.push_back(i-n+1);
        }
        
        return result;
    }
};
