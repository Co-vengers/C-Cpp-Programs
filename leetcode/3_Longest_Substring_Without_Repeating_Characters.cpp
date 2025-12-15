class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, max_length = 0;
        map<char, int> ch_freq;

        for(int right = 0; right < s.size(); right++){
            ch_freq[s[right]]++;
            if(ch_freq[s[right]] > 1){
                right = left;
                left++;
                ch_freq.clear();
                continue;
            }
            max_length = max(max_length, right - left + 1);
        }
        return max_length;
    }
};



}5Po/{ssg}Tla^&@


CB1h4MHwB5FXdX0j

Vyom1307@#*



Hey..
Happy Birthday