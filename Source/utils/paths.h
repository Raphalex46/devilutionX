#pragma once

#include <string>

#include "utils/stdcompat/optional.hpp"

namespace devilution {

#ifdef _WIN32
constexpr char DirectorySeparator = '\\';
#else
constexpr char DirectorySeparator = '/';
#endif

namespace paths {

const std::string &BasePath();
const std::string &PrefPath();
const std::string &ConfigPath();
const std::string &AssetsPath();

void SetBasePath(const std::string &path);
void SetPrefPath(const std::string &path);
void SetConfigPath(const std::string &path);
void SetAssetsPath(const std::string &path);

} // namespace paths

} // namespace devilution
