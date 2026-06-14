class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) return false;
        int status[29]={0};
        int size=s.length();
        for (int i=0; i<size; i++){
            status[int(s[i]-'a')]+=1;
            status[int(t[i]-'a')]-=1;
        }

        for (int i=0; i<29; i++)
            if (status[i]!=0) return false;
        return true;
             
    }
};
