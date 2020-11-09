#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    for (int i = 0; i < k; i++)
    {
        nums.insert(nums.begin(), nums.back());
        nums.pop_back();
    }
}

int main()
{
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);


    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    rotate(numbers, 3);

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    // removeDuplicates(numbers);
}