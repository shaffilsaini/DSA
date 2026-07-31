class Solution {
public:
    int minimumPushes(string word) {
        // Step 1: Count frequency of each character
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }

        // Step 2: Sort frequencies in DESCENDING order
        sort(freq.begin(), freq.end(), greater<int>());

        // Step 3: Greedily assign characters to keys
        int totalPresses = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) break;  // No more characters to assign
            
            int pressesNeeded = (i / 8) + 1;  // First 8 get 1 press, next 8 get 2, etc.
            totalPresses += freq[i] * pressesNeeded;
        }

        return totalPresses;
    }
};