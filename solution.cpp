#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <map>
#include <queue>
using namespace sol1133;
using namespace std;

/*takeaways
  - create a map that will store the keys in
    descending order. The values are the
    occurrences of each number
*/

int Solution::find(vector<int> &nums)
{
  auto result = -1;
  /* order by key in descending order */
  auto freq = map<int, int, greater<int>>();
  for (auto num : nums)
    freq[num]++;

  for (auto &[num, count] : freq)
    /* if it's unique */
    if (count == 1)
      return num;

  return result;
}