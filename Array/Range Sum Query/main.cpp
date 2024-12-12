#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++){
        std::cin >> nums[i];
    }

    std::vector<int> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; i++){
        prefix_sum[i + 1] = prefix_sum[i] + nums[i];
    }

    int left, right;
    while (std::cin >> left >> right){
        std::cout << prefix_sum[right + 1] - prefix_sum[left] << std::endl;
    }
}