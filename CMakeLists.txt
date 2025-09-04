cmake_minimum_required(VERSION 3.16)
project(HelloQt LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 自動處理 moc/uic/rcc（省去手動設定）
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Qt6 的建議寫法：qt_add_executable + qt_finalize_executable
qt_add_executable(helloqt WIN32
  MANUAL_FINALIZATION
  main.cpp
)

target_link_libraries(helloqt PRIVATE Qt6::Widgets)

# macOS 建立 .app bundle
set_target_properties(helloqt PROPERTIES MACOSX_BUNDLE TRUE)

qt_finalize_executable(helloqt)
