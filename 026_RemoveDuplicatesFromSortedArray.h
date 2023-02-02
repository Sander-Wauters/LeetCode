#pragma once
#include <vector>

class RemoveDuplicatesFromSortedArray
{
public:
	int removerDuplicates(std::vector<int>& nums)
	{
		int nextIndex = 1;

		for (int i = 0; i < nums.size() - 1; ++i)
		{
			if (nums[i] != nums[i + 1])
			{
				nums[nextIndex] = nums[i + 1];
				++nextIndex;
			}
		}

		return nextIndex;
	}
};