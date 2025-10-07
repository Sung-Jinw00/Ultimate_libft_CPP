# include "colors.hpp"

std::string getGradientColor(double n, double min, double max)
{
	if (max <= min)
		return "\033[38;2;255;0;0m";

	double ratio = (n - min) / (max - min);
	int r, g, b;

	if (ratio < 0.5)
	{
		r = 255;
		g = static_cast<int>(ratio * 2 * 255);
		b = 0;
	}
	else
	{
		r = static_cast<int>((1 - (ratio - 0.5) * 2) * 255);
		g = 255;
		b = static_cast<int>((ratio - 0.5) * 2 * 255);
	}

	std::ostringstream oss;
	oss << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	return oss.str();
}
