#include <iostream>
#include <vector>

class Solution {
public:
    //  Core Code Logic to find IdenticalPairs - BruteForce
    int numIdenticalPairs(std::vector<int> nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = nums.size() - 1; j > i; j--) {
                if (nums[i] == nums[j]) {
                    count = count + 1;
                }
            }
        }
        return count;
    }
    //  Printing Vector Logic
    void printVec(std::vector<int> nums) {
        for (const auto &val : nums) {
            std::cout << val <<", ";
        }
        printf("\n");
    }
    //  Printing Total Number of Identical Pairs
    void printPairCount(int n) {
        std::cout << "Identical Pairs : " << n << "\n";
    }
};

signed main () {
    Solution sol_obj;
    signed n;
    std::cout << " Enter Number of Elements : ";
    std::cin>>n;
    std::vector<int> vec(n);
    for (signed i = 0; i < n; i++) {
        std::cin>>vec[i];
    }

   sol_obj.printVec(vec);

   signed result;
   result = sol_obj.numIdenticalPairs(vec);
   sol_obj.printPairCount(result);

    return 0;
}
