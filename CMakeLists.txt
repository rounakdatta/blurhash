cmake_minimum_required(VERSION 3.0.0)
project(blurhash VERSION 0.1.0)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/encode/encode.cpp
    src/blurhash/blurhash.cpp
)

# Add an executable with the above sources
add_executable(blurhash ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(blurhash
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/src/include
)