class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if (s.length!==t.length) 
            return false;
        const status= new Array(26).fill(0);
        for (let i=0; i<s.length; i++){
            status[s.charCodeAt(i)-'a'.charCodeAt(0)]++;
            status[t.charCodeAt(i)-'a'.charCodeAt(0)]--;
        }
        return status.every((val)=>val===0);
    }
}
