QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    PrismBase.cpp \
    PyramidBase.cpp \
    built.cpp \
    choosetype.cpp \
    main.cpp \
    mainwindow.cpp \
    prismhexagon.cpp \
    prismpentagon.cpp \
    prismrectangle.cpp \
    prismtriangle.cpp \
    pyramidhexagon.cpp \
    pyramidpentagon.cpp \
    pyramidrectangle.cpp \
    pyramidtriangle.cpp

HEADERS += \
    PrismBase.h \
    PyramidBase.h \
    built.h \
    choosetype.h \
    mainwindow.h \
    prismhexagon.h \
    prismpentagon.h \
    prismrectangle.h \
    prismtriangle.h \
    pyramidhexagon.h \
    pyramidpentagon.h \
    pyramidrectangle.h \
    pyramidtriangle.h

FORMS += \
    PrismBase.ui \
    PyramidBase.ui \
    built.ui \
    choosetype.ui \
    mainwindow.ui \
    prismhexagon.ui \
    prismpentagon.ui \
    prismrectangle.ui \
    prismtriangle.ui \
    pyramidhexagon.ui \
    pyramidpentagon.ui \
    pyramidrectangle.ui \
    pyramidtriangle.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
