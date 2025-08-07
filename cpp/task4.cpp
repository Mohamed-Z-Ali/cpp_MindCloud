#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int primarySum = 0;
    int secondarySum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        primarySum += arr[i][i];
        secondarySum += arr[i][n - 1 - i];
    }

    return abs(primarySum - secondarySum);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    cout << diagonalDifference(arr) << endl;

    return 0;
}