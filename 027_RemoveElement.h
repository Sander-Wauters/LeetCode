#pragma once
#include <vector>

class RemoveElement
{
public:
	int removeElement(std::vector<int>& nums, int val)
	{
		int length = 0;
		int distanceNextEmpty = 0;

		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] != val)
			{
				nums[distanceNextEmpty++] = nums[i];	
				++length;
			}
		}
		
		return length;
	}
};