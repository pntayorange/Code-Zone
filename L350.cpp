#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cstring>
using namespace std;
class Solution1
{
public:
    std::vector<int> intersect(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::vector<int> ans;
        bool check2[nums2.size()];
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    ans.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j);
                    j = nums2.size();
                }
            }
        }
        return ans;
    }
};
class Solution
{
public:
    std::vector<int> intersect(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        int count[1000];
        for (int i = 0; i < 1000; ++i) count[i] =0;
        std::vector<int> result;
        for (int num : nums1)
        {
            count[num]++;
        }
        for (int num : nums2)
        {
            if (count[num] > 0)
            {
                result.push_back(num);
                count[num]--;
            }
        }
        return result;
    }
};
int main()
{
    Solution sol;
    std::vector<int> nums1 = {4, 9, 5};
    std::vector<int> nums2 = {9, 5, 9, 8, 4};
    cout << "--------------------------------";

    std::vector<int> intersection = sol.intersect(nums1, nums2);
    for (auto i : intersection)
    {
        cout << i << " ";
    }
    system("cls");
    for (int i=0;i<101;i++)
    {
        cout << i + 2000 << 1995<<endl;
    }
    return 0;
}