#pragma once
#include <vector>

class TwoSum
{
public:
	std::vector<int> toSum(std::vector<int>& nums, int target)
	{
		for (int i = 0; i < nums.size(); ++i)
		{
			for (int x = i + 1; x < nums.size(); ++x) 
			{
				if (nums[i] + nums[x] == target)
					return std::vector<int>{i, x};
			}
		}
		return std::vector<int>{};
	}
};