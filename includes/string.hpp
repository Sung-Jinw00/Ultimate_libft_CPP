#pragma once

# include <string>

enum class StripSide { LEFT, RIGHT, BOTH };

void	stripe(std::string &s, StripSide side = StripSide::BOTH);
void	stripe(std::string &s, char c, StripSide side = StripSide::BOTH);
void	stripe(std::string &s, const std::string &set, StripSide side = StripSide::BOTH);