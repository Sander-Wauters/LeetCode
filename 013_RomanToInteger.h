#pragma once
#include <string>

class RomanToInteger
{
public:
	int romanToInt(std::string s)
	{
		int result = (1 * (s[0] == 'I')) + (5 * (s[0] == 'V')) + (10 * (s[0] == 'X')) + (50 * (s[0] == 'L')) + (100 * (s[0] == 'C')) + (500 * (s[0] == 'D')) + (1000 * (s[0] == 'M'));
		for (int i = 1; i <= s.size(); ++i)
		{
			result +=
				(1 * (s[i] == 'I')) +
				(5 * (s[i] == 'V')) +
				(10 * (s[i] == 'X')) +
				(50 * (s[i] == 'L')) +
				(100 * (s[i] == 'C')) +
				(500 * (s[i] == 'D')) +
				(1000 * (s[i] == 'M'));

			result -=
				(2 * (s[i - 1] == 'I' && (s[i] == 'V' || s[i] == 'X'))) +
				(20 * (s[i - 1] == 'X' && (s[i] == 'L' || s[i] == 'C'))) +
				(200 * (s[i - 1] == 'C' && (s[i] == 'D' || s[i] == 'M')));
		}

		return result;
	}
};