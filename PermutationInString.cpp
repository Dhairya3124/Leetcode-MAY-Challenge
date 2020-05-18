class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        vector<int>charcount(26,0);
        for(char c:s1)
        {
            charcount[c-'a']++;
        }
        vector<int>result;
        vector<int>count(26,0);
        for(int i=0;i<s2.length();i++)
        {
            count[s2[i]-'a']++;
            if(i>=n)
            {
                count[s2[i-n]-'a']--;
            }
            if(count==charcount)
                return true;
        }
        
        return false;
    }
};
