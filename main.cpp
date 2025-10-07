#include "LibftCpp.hpp"

int	main(void)
{
	bool res = HasExtensionFile("niggatxt", "txt");

	std::cout << "res = " << (res ? "true" : "false") << std::endl;
	return 0;
}
