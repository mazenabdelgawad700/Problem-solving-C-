#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
  unordered_set<int> seen{};
  for (int i = 0; i < nums.size(); i++)
  {
    if (seen.count(nums.at(i)) > 0)
      return true;
    seen.insert(nums.at(i));
  }

  return false;
}

int main()
{

  vector<int> nums = {1, 2, 3, 4, 5};
  cout << containsDuplicate(nums) << endl;

  return 0;
}