add_executable(helloworld helloworld.cpp)
#target_link_libraries(helloworld my_own_library)

add_executable(tests tests.cpp)
add_executable(is_prime is_prime.cpp)

# Kommentieren Sie die folgenden Zeilen fuer die Aufgabe `mile_to_kilometer` aus

add_executable(smallest smallest.cpp)
add_executable(checksum checksum.cpp)
add_executable(sum_multiples sum_multiples.cpp)
add_executable(fract fract.cpp)
add_executable(factorial factorial.cpp)
add_executable(cylinder cylinder.cpp)

add_executable(mile_to_kilometer mile_to_kilometer.cpp)

# generate compile_commands.json
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
