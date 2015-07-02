list(APPEND CMAKE_PREFIX_PATH /usr/local/Cellar/cmocka/1.0.0)
find_package(cmocka REQUIRED)

include_directories(${CMOCKA_INCLUDE_DIR})

add_executable(test_translate test_translate.c)
target_link_libraries(test_translate translate ${CMOCKA_LIBRARY})

enable_testing()
add_test(test_translate test_translate)
