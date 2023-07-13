#include "util/StructuredLibUtilDependencies.h"

namespace structuredlib::util
{
    std::string getStructuredLibUtilDependencies(int level)
    {
        const auto indent = (level ? "\n" : "") + std::string(level * 4, ' ');
        const auto arrow = (level ? "|-->" : "");
        return indent + arrow + std::string("StructuredLib/util");
    }
}
