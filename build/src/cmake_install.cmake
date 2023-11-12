# Install script for directory: /mnt/raid10/yingjie/OpenROAD/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RELEASE")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/opt/rh/devtoolset-8/root/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/openroad" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/openroad")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/openroad"
         RPATH "/opt/or-tools/lib64:/opt/or-tools/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/mnt/raid10/yingjie/OpenROAD/build/src/openroad")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/openroad" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/openroad")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/openroad"
         OLD_RPATH "/opt/or-tools/lib64::::::::::::::::::"
         NEW_RPATH "/opt/or-tools/lib64:/opt/or-tools/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/opt/rh/devtoolset-8/root/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/openroad")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/mnt/raid10/yingjie/OpenROAD/build/src/ifp/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/pad/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/odb/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/sta/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/dbSta/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/rsz/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/stt/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/gpl/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/dpl/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/dpo/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/fin/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/ppl/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/rmp/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/cts/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/grt/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/tap/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/mpl/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/mpl2/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/rcx/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/psm/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/par/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/ant/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/gui/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/drt/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/utl/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/dst/cmake_install.cmake")
  include("/mnt/raid10/yingjie/OpenROAD/build/src/pdn/cmake_install.cmake")

endif()

