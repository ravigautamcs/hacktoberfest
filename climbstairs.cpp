#include <iostream>
#include <vector>

int climbStairs(int n) {
    if (n <= 2) return n;
    std::vector<int> dp(n + 1);
    dp[1] = 1; 
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n;
    std::cout << "Enter the number of stairs: ";
    std::cin >> n;
    std::cout << "Ways to climb " << n << " stairs: " << climbStairs(n) << std::endl;
    return 0;
}
