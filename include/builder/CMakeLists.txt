set(TARGET_NAME Builder)
add_executable(${TARGET_NAME})

target_sources(${TARGET_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/../../src/builder/Car.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../../src/builder/CarBuilder.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../../src/builder/main.cpp)

target_include_directories(${TARGET_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/../)
