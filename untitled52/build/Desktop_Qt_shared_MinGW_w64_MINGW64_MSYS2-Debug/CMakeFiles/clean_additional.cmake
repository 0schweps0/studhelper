# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\untitled52_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\untitled52_autogen.dir\\ParseCache.txt"
  "untitled52_autogen"
  )
endif()
