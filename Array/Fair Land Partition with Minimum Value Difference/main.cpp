#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> land(n, std::vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> land[i][j];
        }
    }
    std::vector<int> row_sum(n, 0);
    std::vector<int> col_sum(m, 0);
    int total_sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            row_sum[i] += land[i][j];
            col_sum[j] += land[i][j];
            total_sum += land[i][j];
        }
    }
    int min_diff = INT32_MAX;
    int row_sum_up = 0;
    int col_sum_left = 0;
    for (int i = 0; i < n; i++){
        row_sum_up += row_sum[i];
        min_diff = std::min(min_diff, std::abs(row_sum_up - (total_sum - row_sum_up)));
    }
    for (int j = 0; j < m; j++){
        col_sum_left += col_sum[j];
        min_diff = std::min(min_diff, std::abs(col_sum_left - (total_sum - col_sum_left)));
    }
    std::cout << min_diff << std::endl;
}