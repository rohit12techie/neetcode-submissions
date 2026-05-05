class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) {
            return false;
        }

        int anagram_calc[128] = {0};

        for(int i=0; i<s.size(); i++) {
            anagram_calc[s[i]-48]++;
        }

        for(int i=0; i<t.size(); i++) {
            anagram_calc[t[i]-48]--;
        }

        for(int i=0; i<128; i++) {
            if(anagram_calc[i] != 0) {
                return false;
            }
        }

        return true;

    }
};
