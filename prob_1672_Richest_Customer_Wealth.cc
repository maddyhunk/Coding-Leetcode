#include <iostream>
#include <vector>

inline signed vecSize(std::vector<std::vector<int>> accounts)
{
    signed vec_size = accounts.size(); // 2
    return vec_size;
}

class Solution
{
public:
    //  core code logic
    signed maximumWealth(std::vector<std::vector<int>> &accounts)
    {
        signed sum = 0, max = 0, max_i = 0;
        for (signed i = 0; i < vecSize(accounts); i++)
        {
            for (signed j = 0; j < accounts[i].size(); j++)
            {
                sum = sum + accounts[i][j];
            }
            if (sum > max) {
                max = sum;
                max_i = i;
            } else { max = max;}
            //max = (sum > max) ? sum : max;
            sum = 0;
        }
        std::cout << "\n CAI Customer indexed " << max_i << " is the wealthiest\n";
        return max;
    }

    //  To Print Output
    void printVec(std::vector<std::vector<int>> &accounts)
    {   printf("[\n");
        for (signed i = 0; i < vecSize(accounts); i++)
        {   printf("[");
            for (signed j = 0; j < accounts[i].size(); j++)
            {
                std::cout << accounts[i][j] << ",";
            }
            if (i == (vecSize(accounts) - 1)) { printf("]\n"); }
            else {printf("], ");}
        }
        printf("]");
    }
};

int main()
{
    Solution s_obj;
    std::vector<std::vector<signed>> accounts = {{1, 2, 1}, {3, 20, 1}};

    signed max_wealth;
    s_obj.printVec(accounts);
    max_wealth= s_obj.maximumWealth(accounts);
    std::cout << " CAI result : " << max_wealth << "\n";

    return 0;
}