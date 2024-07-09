#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
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

bool containsNearbyDuplicate(vector<int> &nums, int k)
{

  unordered_map<int, int> seen;
  for(int i = 0; i < nums.size(); i++)
  {
    int num = nums.at(i);
    if(seen.count(num) > 0)
      {
        if(abs(i - seen[num]) <= k )
          return true;

      }
    seen[num] = i;
  }

  return false;
}


int main()
{
  return 0;
}
