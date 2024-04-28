#include <iostream>
#include <vector>

class Solution
{
public:
    //  core code logic
    int maximumWealth(std::vector<std::vector<int>> accounts)
    {
        int sum = 0, max = 0;
        for (std::vector<int> &customer: accounts) {
            for (int &wealth: customer) {
                sum = sum + wealth;
            }
            // max = std::max(max, sum);
            max = (sum > max) ? sum : max;
            sum = 0;
        }
        return max;
    }

    //  To Print Output
    void printVec(std::vector<std::vector<int>> &accounts)
    {   printf("[\n");
        for (int i = 0; i < accounts.size(); i++)
        {   printf("[");
            for (int j = 0; j < accounts[i].size(); j++)
            {
                std::cout << accounts[i][j] << ",";
            }
            if (i == (accounts.size() - 1)) { printf("]\n"); }
            else {printf("], ");}
        }
        printf("]");
    }
};

int main()
{
    Solution s_obj;
    std::vector<std::vector<int>> accounts = {{1, 2, 1}, {3, 210, 1}};

    int max_wealth;
    s_obj.printVec(accounts);
    max_wealth= s_obj.maximumWealth(accounts);
    std::cout << "\n CAI result : " << max_wealth << "\n";

    return 0;
}