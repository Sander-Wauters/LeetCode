#pragma once
#include <string>
#include <vector>
#include <algorithm>

class LongestCommonPrefix
{
public:
	std::string longestCommonPrefix(std::vector<std::string>& strs)
	{
		if (strs.size() == 1)
			return strs[0];

		std::sort(strs.begin(), strs.end());

		std::string result = "";

		for (int i = 0; i < strs[0].size(); ++i)
		{
			if (strs[0][i] == strs[strs.size() - 1][i])
				result += strs[0][i];
			else
				return result;
		}

		return result;
	}
};