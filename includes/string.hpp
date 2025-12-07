#pragma once

#include <string>

enum StripSide { LEFT, RIGHT, BOTH };

void stripe(std::string &s, StripSide side = BOTH);
void stripe(std::string &s, char c, StripSide side = BOTH);
void stripe(std::string &s, const std::string &set, StripSide side = BOTH);
