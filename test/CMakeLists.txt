project(test)

aux_source_directory(. SRC_LIST)
aux_source_directory(../src/ SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries( ${PROJECT_NAME} gtest)