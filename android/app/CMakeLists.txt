cmake_minimum_required(VERSION 3.4.1)

file(GLOB helloworld_sources
    ../../deps/djinni/support-lib/jni/*.cpp
    ../../generated-src/jni/*.cpp
    ../../src/cpp/*.cpp
)


# include directories for header files
include_directories(
    ../../deps/djinni/support-lib/
    ../../deps/djinni/support-lib/jni/
    ../../generated-src/cpp/
    ../../generated-src/jni/
    ../../src/cpp/
    ../../deps/OpenCV-android-sdk/sdk/native/jni/include
)
add_library(lib-opencv SHARED IMPORTED)
set_target_properties(lib-opencv PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libopencv_java3.so)



add_library(helloworld SHARED ${helloworld_sources})
find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log )

target_link_libraries( # Specifies the target library.
        helloworld

        # OpenCV lib
        lib-opencv

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib} )