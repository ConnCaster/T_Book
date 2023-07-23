
add_executable(t_book main.cpp src/t_book.cpp src/marks.cpp )
target_include_directories(
        t_book
        PUBLIC
        includes
        )