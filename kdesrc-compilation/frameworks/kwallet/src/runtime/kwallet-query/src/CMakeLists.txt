remove_definitions(-DQT_NO_CAST_FROM_ASCII)

add_executable(kwallet-query)

target_sources(kwallet-query PRIVATE
    main.cpp
    querydriver.cpp
)


TARGET_LINK_LIBRARIES(kwallet-query
    KF5Wallet
    KF5::CoreAddons
    KF5::I18n
    Qt${QT_MAJOR_VERSION}::Widgets
)

ecm_mark_nongui_executable(kwallet-query)
install( TARGETS kwallet-query DESTINATION ${KDE_INSTALL_TARGETS_DEFAULT_ARGS})
