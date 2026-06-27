class Solution {
public:

    int countPrimes(int n) {
          vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;
int count=0;
    for (int p = 2; p < n; p++) {
        if (prime[p]) {
            count++;
            for (int i = 2 * p; i < n; i += p) {
                prime[i] = false;
            }
        }
    }

return count;
  
}
};