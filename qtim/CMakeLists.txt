include_directories(
    ${QT_QTCORE_INCLUDE_DIR}
    ${QT_QTDBUS_INCLUDE_DIR}
    ${DBUS_INCLUDE_DIRS}
    ${IBUS_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/../src
)

link_directories(
    ${DBUS_LIBRARY_DIRS}
    ${ICU_LIBRARY_DIRS}
)

set(
    qtim_ibus_SRCS
    ibus-input-context.cpp
    ibuskeyuni.cpp
    ibus-plugin.cpp
)

set(
    qtim_ibus_MOC_HDRS
    ibus-input-context.h
)

QT4_AUTOMOC(${qtim_ibus_SRCS})
QT4_WRAP_CPP(
    qtim_ibus_MOC_SRCS
    ${qtim_ibus_MOC_HDRS}
)

add_library(
    qtim-ibus MODULE
    ${qtim_ibus_SRCS}
    ${qtim_ibus_MOC_SRCS}
)

target_link_libraries(
    qtim-ibus
    debug ${QT_QTGUI_LIBRARY_DEBUG}
    optimized ${QT_QTGUI_LIBRARY_RELEASE}
    ${ICU_LIBRARIES}
    ibus-qt
)

install(
    TARGETS qtim-ibus
    LIBRARY DESTINATION
    ${QT_PLUGINS_DIR}/inputmethods)
