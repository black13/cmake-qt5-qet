cmake_minimum_required(VERSION 3.1.0)

project(qet VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS PrintSupport Xml Widgets REQUIRED)

add_executable(qet
aboutqet.cpp
conducteur.cpp
del.cpp
elementfixe.cpp
entree.cpp
panelappareils.cpp
schema.cpp
borne.cpp
contacteur.cpp
element.cpp
elementperso.cpp
main.cpp
qetapp.cpp
schemavue.cpp
)

target_link_libraries(qet Qt5::PrintSupport Qt5::Xml Qt5::Widgets)