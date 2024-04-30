#include <iostream>
#include <algorithm>
#include <vector>

class Solution
{
public:
    //  Core Code Logic
    int maxWidthOfVerticalArea(std::vector<std::vector<int>>& points)
    {
        int max = 0;
        int max_diff = 0;
        const int vec_size_minus = (points.size() - 1);
        std::sort(points.begin(), points.end());
        for (int i = 0; i < vec_size_minus; i++)
        {
            max_diff = ((points[i + 1][0]) - (points[i][0]));
            max = (max_diff > max) ? max_diff : max;
        }
        return max;
    }

    void printVec(std::vector<std::vector<int>> vec)
    {
        for (const std::vector<int> &row : vec) {
            for (int elem : row) {
                std::cout << elem << " ";
            }
            std::cout << "| ";
        }
        printf("\n-------------------------------------------------------------\n");
    }
};

int main()
{
    Solution obj1;
    std::vector<std::vector<int>> vec = {
        {58, 71}, {64, 41}, {96, 14}, {26, 37}, {11, 67}, {84, 2}, {72, 0}, {16, 95}, {74, 100}, {60, 98}, {8, 45},
        {6, 59}, {69, 32}, {93, 12}, {26, 56}, {9, 39}, {61, 84}, {54, 93}, {43, 47}, {84, 40}, {95, 82}, {17, 85},
        {99, 41}, {96, 24}, {83, 10}, {82, 62}, {26, 81}, {74, 96}, {53, 0}, {11, 72}, {51, 35}, {33, 3}, {33, 52},
        {58, 94}, {89, 92}, {54, 85}
    };

    obj1.printVec(vec);
    int res = obj1.maxWidthOfVerticalArea(vec);
    obj1.printVec(vec);    
    std::cout << " CAI Max Vertical Diff: " << res;
    return 0;
}