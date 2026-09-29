

set(OPERATING_SYSTEM_NAME "sunos")
set(__SUNOS__ TRUE)
set(USE_PKGCONFIG TRUE)


find_package(PkgConfig REQUIRED)


add_compile_definitions(__SUNOS__)

#set(LINK_STATIC_OPTION "-static")
set(LINK_STATIC_OPTION "")

#set(__SYSTEM_ARCHITECTURE "i86pc")



execute_process(COMMAND uname -m OUTPUT_VARIABLE __SYSTEM_ARCHITECTURE)
string(STRIP ${__SYSTEM_ARCHITECTURE} __SYSTEM_ARCHITECTURE)

execute_process(COMMAND uname -r OUTPUT_VARIABLE __SYSTEM_RELEASE)
set(OPERATING_SYSTEM_RELEASE ${__SYSTEM_RELEASE})


message(STATUS "__SYSTEM_ARCHITECTURE is ${__SYSTEM_ARCHITECTURE}")


set(__TARGET_SYSTEM_ARCHITECTURE ${__SYSTEM_ARCHITECTURE})

message(STATUS "__TARGET_SYSTEM_ARCHITECTURE is ${__TARGET_SYSTEM_ARCHITECTURE}")

include("operating_system/operating_system-posix/_desktop_ambient_1.cmake")
include("operating_system/operating_system-posix/_desktop_ambient_2.cmake")

#set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/time-${OPERATING_SYSTEM_NAME}/x64/basis)
set(LIBRARY_OUTPUT_PATH "${CMAKE_CURRENT_BINARY_DIR}/output")
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/time-${OPERATING_SYSTEM_NAME}/x64/basis)
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_CURRENT_BINARY_DIR}/output")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/output")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/output")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/output")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/output")

link_directories(${LIBRARY_OUTPUT_PATH})
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/operating_system/storage-${OPERATING_SYSTEM_NAME}/library/${TARGET_ARCH}/basis)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/operating_system/storage-${OPERATING_SYSTEM_NAME}/third/library/${TARGET_ARCH}/basis)


#include_directories(${WORKSPACE_FOLDER})
#include_directories($ENV{HOME}/__config)
#include_directories(${WORKSPACE_FOLDER}/source)
#include_directories(${WORKSPACE_FOLDER}/source/app)
#include_directories(${WORKSPACE_FOLDER}/source/app/include)
#include_directories(${WORKSPACE_FOLDER}/source/include)
#include_directories(${WORKSPACE_FOLDER}/port/_)
#include_directories(${WORKSPACE_FOLDER}/port/include)
#include_directories(${WORKSPACE_FOLDER}/operating_system)
if (OPERATING_SYSTEM_POSIX)
   include_directories(${WORKSPACE_FOLDER}/operating_system/operating_system-posix)
   include_directories(${WORKSPACE_FOLDER}/operating_system/operating_system-posix/include)
endif ()
include_directories(${WORKSPACE_FOLDER}/operating_system/operating_system-${OPERATING_SYSTEM_NAME})
include_directories(${WORKSPACE_FOLDER}/operating_system/operating_system-${OPERATING_SYSTEM_NAME}/include)
include_directories(${WORKSPACE_FOLDER}/operating_system/operating_system-${OPERATING_SYSTEM_NAME}/include/configuration_selection/${CMAKE_BUILD_TYPE})
include_directories(${WORKSPACE_FOLDER}/operating_system/operating_system-${OPERATING_SYSTEM_NAME}/operating_system/${SLASHED_OPERATING_SYSTEM})
include_directories(${WORKSPACE_FOLDER}/operating_system/operating_system-${OPERATING_SYSTEM_NAME}/operating_system/${DISTRO})

set(INCLUDE_DRAW2D_CAIRO TRUE)
set(INCLUDE_IMAGING_FREEIMAGE TRUE)


set(STORE_FOLDER $ENV{HOME}/store/${SLASHED_OPERATING_SYSTEM})



if("${APPINDICATOR_PKG_MODULE}" STREQUAL "")
   message(STATUS "APPINDICATOR_PKG_MODULE is (Empty)")
else ()
   message(STATUS "APPINDICATOR_PKG_MODULE is ${APPINDICATOR_PKG_MODULE}")
endif()


