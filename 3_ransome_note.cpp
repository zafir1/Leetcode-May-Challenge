/*=============================================
=            Question : RansomNote            =
=============================================*/
/**
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true

*/

/*=====  End of Question : RansomNote  ======*/


/*================================
=            Solution            =
================================*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>v(26);
        for(char &ch:magazine){
            ++v[ch-'a'];
        }
        
        for(char &ch:ransomNote){
            --v[ch-'a'];
        }
        
        for(int &k:v){
            if(k<0){
                return false;
            }
        }
        return true;
    }
};

/*=====  End of Solution  ======*/
