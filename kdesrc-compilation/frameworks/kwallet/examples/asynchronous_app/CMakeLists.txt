add_executable(kwallet-example-asynchronous main.cpp dialog.cpp)
target_link_libraries(kwallet-example-asynchronous KF5::Wallet Qt${QT_MAJOR_VERSION}::Widgets)



