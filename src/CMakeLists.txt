add_executable(slt_node
    main.cpp
)

target_include_directories(slt_node
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../include
)
