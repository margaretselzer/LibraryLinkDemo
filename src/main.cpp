#include "demo/DemoLibDependencies.h"
#include "SimpleLibDependencies.h"
#include "core/StructuredLibCoreDependencies.h"
#include "util/StructuredLibUtilDependencies.h"

#include <Arduino.h>

std::string getDependencies()
{
  const auto deps = "LibraryLinkDemo" + demolib::demo::getDemoLibDependencies(1) +
                    simplelib::getSimpleLibDependencies(1) +
                    structuredlib::core::getStructuredLibCoreDependencies(1) +
                    structuredlib::util::getStructuredLibUtilDependencies(1) + "\n";
  return deps;
}

void setup()
{
  Serial.begin(MONITOR_SPEED);
  // put your setup code here, to run once:
  Serial.println(getDependencies().c_str());
}

void loop()
{
  // put your main code here, to run repeatedly:
}
