#include <iostream>
#include <vector>
#include <map>
using namespace std;

//1、采用hash存储，map，key为target-num[i]，value为位置
//2、target-num[i]存入map中，查找num[i+1]是否在map中：m.find(nums[i])==m.end()
//3、返回位置存在vector中
vector<int> twoSum(vector<int>& nums, int target) 
{
	map<int, int> m;
	vector<int> result;
	for (int i=0;i<nums.size();i++)
	{
		if (m.find(nums[i])==m.end())
		{
			m[target-nums[i]]=i;
		}
		else
		{
			result.push_back(m[nums[i]]+1);
			result.push_back(i+1);
			break;
		}
	}
	return result;
}
