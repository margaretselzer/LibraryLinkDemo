#include "core/StructuredLibCoreDependencies.h"

namespace structuredlib::core
{
    std::string getStructuredLibCoreDependencies(int level)
    {
        const auto indent = (level ? "\n" : "") + std::string(level * 4, ' ');
        const auto arrow = (level ? "|-->" : "");
        return indent + arrow + std::string("StructuredLib/core");
    }
}
