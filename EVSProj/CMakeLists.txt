project (MyProject)
cmake_minimum_required(VERSION 2.8)

find_package(PythonLibs)
include_directories (${PYTHON_INCLUDE_DIRS})

find_package(Boost 1.45.0 COMPONENTS python)
include_directories (${Boost_INCLUDE_DIRS})


add_library (
        mylibinterface SHARED
        mylib.cpp
)

target_link_libraries (mylibinterface
        boost_python
        ${PYTHON_LIBRARIES}
        ${Boost_LIBRARIES}
        )
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
target_link_libraries(<your exe or lib> ${PYTHON_LIBRARIES})