#include "demo/DemoLibDependencies.h"
#include "SimpleLibDependencies.h"
#include "core/StructuredLibCoreDependencies.h"
#include "util/StructuredLibUtilDependencies.h"

namespace demolib::demo
{
    std::string getDemoLibDependencies(int level)
    {
        const auto indent = std::string(level * 4, ' ');
        const auto arrow = (level ? "|-->" : "");
        auto deps = (level ? "\n" : "") + 
                    indent + arrow + "DemoLib" + simplelib::getSimpleLibDependencies(level + 1) +
                    indent + indent + structuredlib::core::getStructuredLibCoreDependencies(level + 1) +
                    indent + indent + structuredlib::util::getStructuredLibUtilDependencies(level + 1);
        return deps;
    }

}
