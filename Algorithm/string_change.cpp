#include <iostream>
#include <vector>
#include <string>

using namespace std;

void minEditDistance(const string& str1, const string& str2) {
    int m = str1.length();
    int n = str2.length();

    // Create a 2D vector to store the edit distances
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Initialize the first row and column
    for (int i = 0; i <= m; ++i)
        dp[i][0] = i;
    for (int j = 0; j <= n; ++j)
        dp[0][j] = 0;

    // Compute edit distance
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
        }
    }

    // Traceback to find the minimum cost edit sequence
    int i = m, j = n;
    vector<pair<char, string>> editSequence;
    while (i > 0 && j > 0) {
        if (str1[i - 1] == str2[j - 1]) {
            editSequence.push_back(make_pair(str1[i - 1], "no change"));
            --i;
            --j;
        } else if (dp[i][j] == dp[i - 1][j] + 1) {
            editSequence.push_back(make_pair(str1[i - 1], "delete"));
            --i;
        } else if (dp[i][j] == dp[i][j - 1] + 1) {
            editSequence.push_back(make_pair(str2[j - 1], "insert"));
            --j;
        } else {
            editSequence.push_back(make_pair(str2[j - 1], "substitute"));
            --i;
            --j;
        }
    }

    // Print the minimum edit distance and the minimum cost edit sequence
    cout << "Minimum edit distance: " << dp[m][n] << endl;
    cout << "Minimum cost edit sequence:" << endl;
    for (int k = editSequence.size() - 1; k >= 0; --k) {
        cout << editSequence[k].first << " - " << editSequence[k].second << endl;
    }
}

int main() {
    string str1 = "kitten";
    string str2 = "sitting";
    minEditDistance(str1, str2);
    return 0;
}
