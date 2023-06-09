add_subdirectory(core)

# KIOCore-only executables
add_subdirectory(protocoltojson)
add_subdirectory(kntlm)
if (NOT ANDROID)
    add_subdirectory(ioslaves)
    add_subdirectory(kioworkers)
    add_subdirectory(kiod)
    add_subdirectory(kssld)
    add_subdirectory(schemehandlers)
endif()
add_subdirectory(kioslave)

if (NOT KIOCORE_ONLY)
add_subdirectory(gui)
add_subdirectory(widgets)
if (NOT ANDROID)
    add_subdirectory(kpasswdserver)
    add_subdirectory(filewidgets)
    add_subdirectory(kioexec)
    add_subdirectory(urifilters)
    add_subdirectory(kcms)
endif()

if(NOT WIN32 AND NOT ANDROID)
  # arpa/nameser.h
  add_subdirectory(kpac)
endif()

set(NON_KIOCORE_LINK_QCHS
    Qt5Widgets_QCH
    Qt5Network_QCH
    KF5Completion_QCH
    KF5WidgetsAddons_QCH
    KF5JobWidgets_QCH
    KF5Bookmarks_QCH
    KF5ItemViews_QCH
    KF5XmlGui_QCH
    KF5Solid_QCH
    KF5WindowSystem_QCH
)

if(BUILD_DESIGNERPLUGIN AND NOT ANDROID)
    add_subdirectory(designer)
endif()

endif()

ecm_qt_install_logging_categories(
    EXPORT KIO
    FILE kio.categories
    DESTINATION ${KDE_INSTALL_LOGGINGCATEGORIESDIR}
)

if (BUILD_QCH)
    macro(_make_absolute var_name base_path)
        set(_result)
        foreach(_path ${${var_name}})
            if(IS_ABSOLUTE "${_path}")
                list(APPEND _result "${_path}")
            else()
                list(APPEND _result "${base_path}/${_path}")
            endif()
        endforeach()
        set(${var_name} ${_result})
    endmacro()

    _make_absolute(KIONTLM_QCH_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/(kntlm")
    _make_absolute(KIOCore_QCH_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/core")
    _make_absolute(KIOGui_QCH_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/gui")
    _make_absolute(KIOWidgets_QCH_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/widgets")
    _make_absolute(KIOFileWidgets_QCH_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/filewidgets")

    ecm_add_qch(
        KF5KIO_QCH
        NAME KIO
        BASE_NAME KF5KIO
        VERSION ${KF_VERSION}
        ORG_DOMAIN org.kde
        SOURCES # using only public headers, to cover only public API
            ${KIONTLM_QCH_SOURCES}
            ${KIOCore_QCH_SOURCES}
            ${KIOGui_QCH_SOURCES}
            ${KIOWidgets_QCH_SOURCES}
            ${KIOFileWidgets_QCH_SOURCES}
        MD_MAINPAGE "${CMAKE_SOURCE_DIR}/README.md"
        IMAGE_DIRS "${CMAKE_SOURCE_DIR}/docs/pics"
        LINK_QCHS
            KF5CoreAddons_QCH
            KF5Service_QCH
            ${NON_KIOCORE_LINK_QCHS}
        BLANK_MACROS
            KIOCORE_EXPORT
            KIOCORE_DEPRECATED_EXPORT
            KIOCORE_DEPRECATED
            "KIOCORE_DEPRECATED_VERSION(x, y, t)"
            "KIOCORE_DEPRECATED_VERSION_BELATED(x, y, xt, yt, t)"
            "KIOCORE_ENUMERATOR_DEPRECATED_VERSION(x, y, t)"
            "KIOCORE_ENUMERATOR_DEPRECATED_VERSION_BELATED(x, y, xt, yt, t)"
            KNTLM_EXPORT
            "KNTLM_DEPRECATED_VERSION(x, y, t)"
            KIOGUI_EXPORT
            KIOGUI_DEPRECATED_EXPORT
            KIOGUI_DEPRECATED
            "KIOGUI_DEPRECATED_VERSION(x, y, t)"
            "KIOGUI_DEPRECATED_VERSION_BELATED(x, y, xt, yt, t))"
            "KIOGUI_ENUMERATOR_DEPRECATED_VERSION(x, y, t)"
            "KIOGUI_ENUMERATOR_DEPRECATED_VERSION_BELATED(x, y, xt, yt, t))"
            KIOWIDGETS_EXPORT
            KIOWIDGETS_DEPRECATED_EXPORT
            KIOWIDGETS_DEPRECATED
            "KIOWIDGETS_DEPRECATED_VERSION(x, y, t)"
            "KIOWIDGETS_DEPRECATED_VERSION_BELATED(x, y, xt, yt, t)"
            "KIOWIDGETS_ENUMERATOR_DEPRECATED_VERSION(x, y, t)"
            "KIOWIDGETS_ENUMERATOR_DEPRECATED_VERSION_BELATED(x, y, xt, yt, t)"
            KIOFILEWIDGETS_EXPORT
            KIOFILEWIDGETS_DEPRECATED_EXPORT
            KIOFILEWIDGETS_DEPRECATED
            "KIOFILEWIDGETS_DEPRECATED_VERSION(x, y, t)"
            "KIOFILEWIDGETS_DEPRECATED_VERSION_BELATED(x, y, xt, yt, t))"
            "KIOFILEWIDGETS_ENUMERATOR_DEPRECATED_VERSION(x, y, t)"
            "KIOFILEWIDGETS_ENUMERATOR_DEPRECATED_VERSION_BELATED(x, y, xt, yt, t))"
        PREDEFINED_MACROS
            "KIOCORE_ENABLE_DEPRECATED_SINCE(x, y)=1"
            "KIOCORE_BUILD_DEPRECATED_SINCE(x, y)=1"
            "KNTLM_ENABLE_DEPRECATED_SINCE(x, y)=1"
            "KNTLM_BUILD_DEPRECATED_SINCE(x, y)=1"
            "KIOGUI_ENABLE_DEPRECATED_SINCE(x, y)=1"
            "KIOGUI_BUILD_DEPRECATED_SINCE(x, y)=1"
            "KIOWIDGETS_ENABLE_DEPRECATED_SINCE(x, y)=1"
            "KIOWIDGETS_BUILD_DEPRECATED_SINCE(x, y)=1"
            "KIOFILEWIDGETS_ENABLE_DEPRECATED_SINCE(x, y)=1"
            "KIOFILEWIDGETS_BUILD_DEPRECATED_SINCE(x, y)=1"
        TAGFILE_INSTALL_DESTINATION ${KDE_INSTALL_QTQCHDIR}
        QCH_INSTALL_DESTINATION ${KDE_INSTALL_QTQCHDIR}
        COMPONENT Devel
    )
endif()
