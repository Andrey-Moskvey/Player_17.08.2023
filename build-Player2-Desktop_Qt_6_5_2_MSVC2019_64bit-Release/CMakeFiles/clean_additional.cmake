# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Player2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Player2_autogen.dir\\ParseCache.txt"
  "Player2_autogen"
  )
endif()
