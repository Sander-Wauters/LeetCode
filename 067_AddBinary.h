#pragma once
#include <string>

class AddBinary
{
public:
	std::string addBinary(std::string a, std::string b)
	{
		int al = a.size() - 1;
		int bl = b.size() - 1;
		int c = 0;

		std::string str;

		while (al >= 0 || bl >= 0 || c)
		{
			if (al >= 0)
				c += a[al--] - '0';
			if (bl >= 0)
				c += b[bl--] - '0';

			str.insert(0, std::to_string(c & 1));
			c >>= 1;
		}

		return str;
	}
};