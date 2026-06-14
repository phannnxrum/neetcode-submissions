class Solution {
    public String longestCommonPrefix(String[] strs) {
        int n=strs.length;
        if (n==0) return "";

        for (int i=0; i<strs[0].length(); i++){
            char c=strs[0].charAt(i);
            for (int j=1; j<n; j++){
                if (strs[j].length()==i || strs[j].charAt(i)!=c)
                    return strs[0].substring(0, i);
            }
        }
        return strs[0];
    }
}