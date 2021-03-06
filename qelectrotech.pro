######################################################################
# Automatically generated by qmake (2.01a) dim. oct. 8 23:57:43 2006
######################################################################

TEMPLATE = app
TARGET = qet
DEPENDPATH += .
INCLUDEPATH += .

Release:DESTDIR = release
Release:OBJECTS_DIR = release/.obj
Release:MOC_DIR = release/.moc
Release:RCC_DIR = release/.rcc
Release:UI_DIR = release/.ui

Debug:DESTDIR = debug
Debug:OBJECTS_DIR = debug/.obj
Debug:MOC_DIR = debug/.moc
Debug:RCC_DIR = debug/.rcc
Debug:UI_DIR = debug/.ui

# Input
HEADERS += aboutqet.h \
           borne.h \
           conducteur.h \
           contacteur.h \
           del.h \
           element.h \
           elementfixe.h \
           elementperso.h \
           entree.h \
           panelappareils.h \
           qetapp.h \
           schema.h \
           schemavue.h
SOURCES += aboutqet.cpp \
           borne.cpp \
           conducteur.cpp \
           contacteur.cpp \
           del.cpp \
           element.cpp \
           elementfixe.cpp \
           elementperso.cpp \
           entree.cpp \
           main.cpp \
           panelappareils.cpp \
           qetapp.cpp \
           schema.cpp \
           schemavue.cpp
RESOURCES += qelectrotech.qrc
TRANSLATIONS += qet_en.ts
QT += xml
QT += widgets
QT += printsupport