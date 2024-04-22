#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    //  Core Code Logic to find IdenticalPairs - Map
    int numIdenticalPairs(std::vector<int> nums) {
        signed count=0;
        std::map<int, int> freq;
        for (signed i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for (auto &pair : freq) {
            count  = count + (pair.second * (pair.second - 1)) / 2;
        }
        return count;
    }
    //  Printing Vector Logic
    void printVec(std::vector<int> nums) {
        printf("\n------------------------\n");
        for (const auto &val : nums) {
            std::cout << val <<", ";
        }
        printf("\n------------------------\n");
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
