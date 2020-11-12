TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CXXFLAGS += -Wall -Wextra
LIBS += -lcurl -lsqlite3 -lpthread

INCLUDEPATH += \
        include/

SOURCES += \
        src/cmd_handler.cpp       \
        src/cmds.cpp              \
        src/curl.cpp              \
        src/logger.cpp            \
        src/long_poll.cpp         \
        src/main.cpp              \
        src/split.cpp             \
        src/sqlite.cpp            \
        lib/src/crc32.cpp         \
        lib/src/wchar.cpp         \

HEADERS += \
        include/cmd_handler.hpp   \
        include/curl.hpp          \
        include/error_handler.hpp \
        include/logger.hpp        \
        include/long_poll.hpp     \
        include/metadata.hpp      \
        include/split.hpp         \
        include/sqlite.hpp        \
        lib/include/crc32.hpp     \
        lib/include/json.hpp      \
        lib/include/wchar.hpp     \
