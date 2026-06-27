class Solution {
public:
    int maximumLength(vector<int>& nums) {
         unordered_map<long long, int> freq;

        for (int x : nums)
            freq[x]++;

        int ans = 1;

        for (auto &[x, cnt] : freq) {

            // Special case for 1
            if (x == 1) {
                if (cnt % 2 == 0)
                    ans = max(ans, cnt - 1);
                else
                    ans = max(ans, cnt);
                continue;
            }

            long long curr = x;
            int len = 0;

            while (freq.count(curr) && freq[curr] >= 2) {
                len += 2;

                // Prevent overflow
                if (curr > 1000000000LL)
                    break;

                curr = curr * curr;
            }

            if (freq.count(curr))
                len++;
            else if (len > 0)
                len--;

            ans = max(ans, len);
        }

        return ans;
    }
};