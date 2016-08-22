QT       += core network
include(..\..\..\Qt.711.2016.common\lib\common\common.pri)
include(..\..\..\Qt.711.2016.saveLoadProcessor\lib\loadSave\saveLoadProcessor.pri)

SOURCES += \
    $$PWD/driver.cpp \
    $$PWD/drivermanager.cpp

HEADERS  += \
    $$PWD/driver.h \
    $$PWD/drivermanager.h \
    $$PWD/idriverupdate.h \
    $$PWD/idrivercommon.h \
    $$PWD/idrivermodifyaddress.h \
    $$PWD/idrivermanageroperatedriver.h \
    $$PWD/idrivermanageractiviatedriver.h

INCLUDEPATH += $$PWD\

DISTFILES += \
    $$PWD\../../HISTORY.txt \
    $$PWD\../../README.txt
