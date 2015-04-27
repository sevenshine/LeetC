#include <iostream>
#include <vector>
#include <map>
using namespace std;

//1������hash�洢��map��keyΪtarget-num[i]��valueΪλ��
//2��target-num[i]����map�У�����num[i+1]�Ƿ���map�У�m.find(nums[i])==m.end()
//3������λ�ô���vector��
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
