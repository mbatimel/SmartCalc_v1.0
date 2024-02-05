# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Smart_calc_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Smart_calc_autogen.dir/ParseCache.txt"
  "Smart_calc_autogen"
  )
endif()
