PROJECT(Singleton)

SET(naive_source_dir ${PROJECT_SOURCE_DIR}/naive)
ADD_EXECUTABLE(naive ${naive_source_dir}/naive.cc)
TARGET_INCLUDE_DIRECTORIES(naive PRIVATE ${PROJECT_SOURCE_DIR})

SET(safe_source_dir ${PROJECT_SOURCE_DIR}/safe)
ADD_EXECUTABLE(safe ${safe_source_dir}/safe.cc)
TARGET_INCLUDE_DIRECTORIES(safe PRIVATE ${PROJECT_SOURCE_DIR})