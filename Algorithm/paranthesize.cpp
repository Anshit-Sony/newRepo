#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include<climits>

using namespace std;

// Function to evaluate expression based on given operators
int evaluate(int a, char op, int b) {
    if (op == '+')
        return a + b;
    else if (op == '*')
        return a * b;
    else
        throw invalid_argument("Invalid operator");
}

// Function to parse expression and return vector of integers and operators
vector<string> parseExpression(string expr) {
    vector<string> tokens;
    istringstream iss(expr);
    string token;
    while (getline(iss, token, ' ')) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to calculate maximum value using dynamic programming
int calculateMaxValue(string expr) {
    vector<string> tokens = parseExpression(expr);
    int n = tokens.size() / 2 + 1;
    vector<vector<int>> dpMax(n, vector<int>(n, 0));
    vector<vector<int>> dpMin(n, vector<int>(n, 0));

    // Base case: fill the diagonal with initial values
    for (int i = 0; i < n; ++i) {
        dpMax[i][i] = stoi(tokens[2 * i]);
        dpMin[i][i] = stoi(tokens[2 * i]);
    }

    // Iterate over lengths of substrings
    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;
            dpMax[i][j] = INT_MIN;
            dpMin[i][j] = INT_MAX;
            for (int k = i; k < j; ++k) {
                int val1 = evaluate(dpMax[i][k], tokens[2 * k + 1][0], dpMax[k + 1][j]);
                int val2 = evaluate(dpMax[i][k], tokens[2 * k + 1][0], dpMin[k + 1][j]);
                int val3 = evaluate(dpMin[i][k], tokens[2 * k + 1][0], dpMax[k + 1][j]);
                int val4 = evaluate(dpMin[i][k], tokens[2 * k + 1][0], dpMin[k + 1][j]);
                dpMax[i][j] = max(dpMax[i][j], max(val1, max(val2, max(val3, val4))));
                dpMin[i][j] = min(dpMin[i][j], min(val1, min(val2, min(val3, val4))));
            }
        }
    }
    return dpMax[0][n - 1];
}

int main() {
    string expression;
    cout << "Enter the expression: ";
    getline(cin, expression);
    cout << "Maximum possible value: " << calculateMaxValue(expression) << endl;
    return 0;
}
