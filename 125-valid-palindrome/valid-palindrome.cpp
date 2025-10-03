class Solution {
public:
    bool isPalindrome(string s) {
        string ans ="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i]))
                ans+=tolower(s[i]);
        }

        int n = ans.size();
        for(int i=0;i<n;i++){
            if(ans[i]!=ans[n-i-1])
                return 0;
        }
        return 1;
    }
};