#pragma once
#include <string>

class ValidParentheses
{
public:
	bool isValid(std::string s)
	{
		if (s.size() <= 1 || (s[0] == ')' || s[0] == ']' || s[0] == '}'))
			return false;

		std::string open = { s[0] };
		for (int i = 1; i < s.size(); ++i)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
				open += s[i];
			else if (open.size() > 0 && ((open[open.size() - 1] == '(' && s[i] == ')') ||
				(open[open.size() - 1] == '[' && s[i] == ']') ||
				(open[open.size() - 1] == '{' && s[i] == '}')))
				open.pop_back();
			else
				return false;
		}

		return !open.size();
	}
};
