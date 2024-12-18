#[[
mkdir build
cd build
cmake ..
]]

cmake_minimum_required(VERSION 3.20)

project(seat_calc
	LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE headers "src/*.h")
file(GLOB_RECURSE sources "src/*.cpp")

add_executable(${PROJECT_NAME} 
	#WIN32
	${headers} 
	${sources}  
)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}
	FILES ${sources} ${headers}
)

#add_compile_definitions(UNICODE _UNICODE)
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

