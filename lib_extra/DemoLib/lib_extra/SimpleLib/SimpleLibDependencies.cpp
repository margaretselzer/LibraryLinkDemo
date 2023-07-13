#include "SimpleLibDependencies.h"

namespace simplelib
{
    std::string getSimpleLibDependencies(int level)
    {
        const auto indent = (level ? "\n" : "") + std::string(level * 4, ' ');
        const auto arrow = (level ? "|-->" : "");
        return indent + arrow + std::string("SimpleLib");
    }

}
