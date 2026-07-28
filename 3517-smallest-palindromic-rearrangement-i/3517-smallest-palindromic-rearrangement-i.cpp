class Solution {
public:
    string smallestPalindrome(string s) {
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'a']++;
    }

    string first_half = "";
    string middle = "";

    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            middle += (char)(i + 'a');
        }
        
       
        for (int j = 0; j < count[i] / 2; j++) {
            first_half += (char)(i + 'a');
        }
    }

    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    return first_half + middle + second_half;
}
};