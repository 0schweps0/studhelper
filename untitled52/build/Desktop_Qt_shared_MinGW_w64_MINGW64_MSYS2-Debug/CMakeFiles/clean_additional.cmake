# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TestGlobalConstants_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TestGlobalConstants_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\untitled52_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\untitled52_autogen.dir\\ParseCache.txt"
  "TestGlobalConstants_autogen"
  "untitled52_autogen"
  )
endif()
