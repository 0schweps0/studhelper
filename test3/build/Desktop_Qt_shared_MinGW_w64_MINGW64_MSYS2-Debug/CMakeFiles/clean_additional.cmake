# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\test3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\test3_autogen.dir\\ParseCache.txt"
  "test3_autogen"
  )
endif()
