QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  \
    tst_Calculations.cpp \
    tst_OtherCalculations.cpp \
    main.cpp \
    ../CalculationsProgram/Calculations.cpp \
    ../CalculationsProgram/Parameters.cpp

HEADERS += \
    ../CalculationsProgram/Calculations.hpp \
    ../CalculationsProgram/Parameters.hpp \
    tst_Calculations.hpp \
    tst_OtherCalculations.hpp
