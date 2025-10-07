#pragma once

# include <iostream>
# include <sstream>

# ifndef RESET
#  define RESET		"\033[0m"
# endif

# ifndef RED
#  define RED		"\033[31m"
# endif

# ifndef GREEN
#  define GREEN		"\033[38;2;0;255;0m"
# endif

# ifndef YELLOW
#  define YELLOW	"\033[38;2;255;255;0m"
# endif

# ifndef BLUE
#  define BLUE		"\033[34m"
# endif

# ifndef MAGENTA
#  define MAGENTA	"\033[35m"
# endif

# ifndef CYAN
#  define CYAN		"\033[38;2;0;255;255m"
# endif

/**
 * @brief
 * Get the gradient of color that a number should have between his minimum and maximum numbers in the list.
 * @return
 * The gradient only return the color as a string, it doesn't display the number provided.
 * 
 * @param n the number that will get his gradient.
 * @param min the minimum number of the list.
 * @param max the maximum number of the list.
 * 
 * @note
 * 	if `max` is inferior or equal to `min`, the gradient will be red by default.
*/
std::string getGradientColor(double n, double min, double max);