#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1133;

/*
Input: [5,7,3,9,4,9,8,3,1]
Output: 8
Explanation:
The maximum integer in the array is 9 but it is repeated.
The number 8 occurs only once, so it's the answer.
*/

tuple<vector<int>, int> testFixture1()
{
  return make_tuple(vector<int>{5, 7, 3, 9, 4, 9, 8, 3, 1}, 8);
}

/*
Input: [9,9,8,8]
Output: -1
Explanation:
There is no number that occurs only once.
*/

tuple<vector<int>, int> testFixture2()
{
  return make_tuple(vector<int>{9, 9, 8, 8}, -1);
}
void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.find(get<0>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.find(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}