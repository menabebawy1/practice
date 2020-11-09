#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() > 0)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
    }
    return nums.size();
};

int removeDuplicates(vector<int> &nums)//Solution
{
    nums.erase(unique(nums.begin(), nums.end()), nums.end()); //This deletes everything after unique

    //erase(from, to) erases this range
    //unique(from, to) //gets the unique values in this range

    return nums.size();
}

int main()
{
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(4);

    removeDuplicates(numbers);

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    // removeDuplicates(numbers);
}