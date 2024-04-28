#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    //  Core Logic
    std::vector<int> findWordsContaining(std::vector<std::string>& words,
                                         char x) {
        std::vector<int> count_vec;
        for (int i = 0; i < words.size(); i++) {
            if(words[i].find(x) != std::string::npos) {
                count_vec.push_back(i);
            }
        }
        return count_vec;
    }

    //  To Print Output
    void printVec(std::vector<int> count_vec) {
        for (int &val:count_vec) {
            std::cout << val << ", ";
        }
    }
};

int main() {
    std::vector<std::string> words = {"leet", "code", "abc", "9e1"};
    Solution s_obj;
    std::vector<int> count_vec;

    count_vec = s_obj.findWordsContaining(words, 'e');
    s_obj.printVec(count_vec);
    return 0;
}