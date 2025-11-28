#pragma once

# include <string>

enum class StripSide { LEFT, RIGHT, BOTH };

void	stripe(std::string &s, StripSide side = StripSide::BOTH);