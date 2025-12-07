#include "string.hpp"

void	stripe(std::string &s, StripSide side)
{
	size_t start = 0;

	if (side == StripSide::LEFT || side == StripSide::BOTH)
		while (start < s.size() && std::isspace(s[start]))
			start++;
	if (start == s.size())
	{
		s = "";
		return ;
	}
	size_t end = s.size() - 1;
	if (side == StripSide::RIGHT || side == StripSide::BOTH)
		while (end > start && std::isspace(s[end]))
			end--;
	s = s.substr(start, end - start + 1);
}

void stripe(std::string &s, char c, StripSide side)
{
	size_t start = 0;
	if (side == StripSide::LEFT || side == StripSide::BOTH)
		while (start < s.size() && s[start] == c)
			start++;

	if (start == s.size())
	{
		s = "";
		return;
	}

	size_t end = s.size() - 1;
	if (side == StripSide::RIGHT || side == StripSide::BOTH)
		while (end > start && s[end] == c)
			end--;

	s = s.substr(start, end - start + 1);
}

static bool inSet(char c, const std::string &set)
{
	for (char s : set)
		if (c == s)
			return true;
	return false;
}

void stripe(std::string &s, const std::string &set, StripSide side)
{
	size_t start = 0;
	if (side == StripSide::LEFT || side == StripSide::BOTH)
		while (start < s.size() && inSet(s[start], set))
			start++;

	if (start == s.size())
	{
		s = "";
		return;
	}

	size_t end = s.size() - 1;
	if (side == StripSide::RIGHT || side == StripSide::BOTH)
		while (end > start && inSet(s[end], set))
			end--;

	s = s.substr(start, end - start + 1);
}