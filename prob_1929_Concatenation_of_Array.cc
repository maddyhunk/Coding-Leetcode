#include <iostream>

class Solution {
private:
  int64_t n = 1;
  int64_t *nums;
  int64_t twice_len = 2*n;
  int64_t *ans;
public:
    Solution() {}

    void createBaseArray(int64_t len_of_base_array) {
        std::cout << " Creating Base Array : \n";
        n = len_of_base_array;
        nums = new int64_t [n];
        int64_t val = 0;
        for (int64_t i = 0; i < n; i++) {
            std::cin>>val;
            nums[i] = val;
        }
    }

    void getConcatenation() {
        twice_len = 2*n;
        ans = new int64_t [twice_len];
        for (int64_t i = 0; i < twice_len; i++) {
          if (i < n) {
            ans[i] = nums[i];
          } else {
            ans[i] = nums[i-n];
          }
        }
    }

    void printArray(std::string choice = "final") {
        std::cout << " Printing Arr : " << choice << " : [";
        for (int64_t i = 0; i < twice_len; i++) {
            if (choice == "base" && i == n){
                break;
            }
            std::cout << ans[i] << ",";
        }
        printf("]");
    }

    void memFree() {
        delete[] ans;
        delete[] nums;
    }
};

int main () {
    Solution sol_obj;
    std::string ch;
    int64_t n;
    std::cout << "Enter n val : ";
    std::cin>>n;
    std::cout<<" N = " <<n << "\n";
    sol_obj.createBaseArray(n);
    sol_obj.getConcatenation();
    std::cout << " Enter Choice to print base/final";
    std::cin>>ch;
    sol_obj.printArray(ch);
    sol_obj.memFree();

    return 0;
}