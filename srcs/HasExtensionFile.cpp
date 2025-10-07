#include "Files.hpp"

/**
 * @brief
 * Verify is a filename has the extension required.
 * 
 * @param filename the name of the file.
 * @param extension the extension required.
 * 
 * @return
 * True if `extension` has been found, false if not.
 * 
*/
bool	HasExtensionFile(const std::string& filename, const std::string &extension)
{
	std::string modif = extension;

	if (modif[0] != '.')
		modif = "." + modif;
	size_t extension_size = modif.size();

	return	filename.size() >= extension_size &&
			filename.substr(filename.size() - extension_size) == modif;
}
