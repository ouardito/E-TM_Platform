QT       += core gui sql mqtt

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    co_dashboard.cpp \
    co_invoice.cpp \
    co_profileview.cpp \
    co_signuppage.cpp \
    dbmanager.cpp \
    dr_dashboard.cpp \
    dr_deliverystatuts.cpp \
    dr_profileview.cpp \
    dr_signuppage.cpp \
    inputcheck.cpp \
    main.cpp \
    mainwindow.cpp \
    tc_dashboard.cpp \
    tc_finddriver.cpp \
    tc_signuppage.cpp

HEADERS += \
    co_dashboard.h \
    co_invoice.h \
    co_profileview.h \
    co_signuppage.h \
    dbmanager.h \
    dr_dashboard.h \
    dr_deliverystatuts.h \
    dr_profileview.h \
    dr_signuppage.h \
    inputcheck.h \
    mainwindow.h \
    tc_dashboard.h \
    tc_finddriver.h \
    tc_signuppage.h

FORMS += \
    co_dashboard.ui \
    co_invoice.ui \
    co_profileview.ui \
    co_signuppage.ui \
    dr_dashboard.ui \
    dr_deliverystatuts.ui \
    dr_profileview.ui \
    dr_signuppage.ui \
    mainwindow.ui \
    tc_dashboard.ui \
    tc_finddriver.ui \
    tc_signuppage.ui

LIBS = -lpaho-mqtt3as \
     -lpaho-mqttpp3

RESOURCES += \
    rsc.qrc


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


