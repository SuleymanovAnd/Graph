cmake_minimum_required(VERSION 3.22)

set (MY_DIRECTORY ${CMAKE_SOURCE_DIR}/include)

set(SOURCE
        main.cpp

        )
set(INCLUDE
        ${MY_DIRECTORY}/ListGraph.h
        ${MY_DIRECTORY}/MatrixGraph.h
        ${MY_DIRECTORY}/igraph.h
        ${MY_DIRECTORY}/
        )


add_executable(Graph ${SOURCE} ${INCLUDE})
target_include_directories (Graph PUBLIC ${MY_DIRECTORY})