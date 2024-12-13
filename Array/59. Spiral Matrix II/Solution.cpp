class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int epoch = (n + 1) / 2;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        std::pair<int, int> aa = {0, 0};
        std::pair<int, int> ab = {0, n - 1};
        std::pair<int, int> ba = {n - 1, 0};
        std::pair<int, int> bb = {n - 1, n - 1};
        int ptr = 1;
        for (int i = 0; i < epoch; i++){
            if ((aa == bb) && (ab == ba)){
                matrix[aa.first][aa.second] = ptr;
            }
            else{
                for (int j = 0; j < ab.second - aa.second; j++){
                    matrix[aa.first][aa.second+j] = ptr;
                    ++ptr;
                }
                for (int k = 0; k < bb.first - ab.first; k++){
                    matrix[ab.first + k][ab.second] = ptr;
                    ++ptr;
                }
                for (int l = 0; l < bb.second - ba.second; l++){
                    matrix[bb.first][bb.second - l] = ptr;
                    ++ptr;
                }
                for (int m = 0; m < ba.first - aa.first; m++){
                    matrix[ba.first - m][ba.second] = ptr;
                    ++ptr;
                }
                ++aa.first;
                ++aa.second;
                ++ab.first;
                --ab.second;
                --ba.first;
                ++ba.second;
                --bb.first;
                --bb.second;
            }
        }
        return matrix;
    }
};