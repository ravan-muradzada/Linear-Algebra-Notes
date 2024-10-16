#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiplyMatrices(vector<vector<int>>& m1, vector<vector<int>>& m2){
    int m = m1.size(), n = m1[0].size(), k = m2[0].size();
    vector<vector<int>> result(m, vector<int>(k));

    for (int i = 0; i < m; ++i){
        for (int j = 0; j < k; ++j){
            int curr = 0;
            for (int h = 0; h < n; ++h){
                curr += (m1[i][h] * m2[h][j]);
            }
            result[i][j] = curr;
        }
    }

    return result;
}

int main(){
    vector<vector<int>> m1 = {
        {3, 4, -1},
        {2, -5, 2},
        {4, -5, 8},
        {9, 12, -3}
    }; // m x n (m = 4, n = 3)

    vector<vector<int>> m2 = {
        {7, 8},
        {3, -4},
        {12, -3}
    }; // n x k (n = 3, k = 2)

    auto result = multiplyMatrices(m1, m2);

    for (auto& i: result){
        for (int j: i){
            cout << j << "\t";
        }
        cout << endl;
    }


    return 0;
}