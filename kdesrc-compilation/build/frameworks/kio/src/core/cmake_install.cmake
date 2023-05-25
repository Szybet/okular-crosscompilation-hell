# Install script for directory: /home/szybet/kdesrc/frameworks/kio/src/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/HDD/Project/Public/okulartry/okular-things")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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
  set(CMAKE_CROSSCOMPILING "ON")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.KDirNotify.xml" FILES "/home/szybet/kdesrc/frameworks/kio/src/core/org.kde.KDirNotify.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.KPasswdServer.xml" FILES "/home/szybet/kdesrc/frameworks/kio/src/core/org.kde.KPasswdServer.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.KSlaveLauncher.xml" FILES "/home/szybet/kdesrc/frameworks/kio/src/core/org.kde.KSlaveLauncher.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOCore.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOCore.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kio/bin/libKF5KIOCore.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOCore/kio" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kio/src/core/idleslave.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/connectionserver.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/tcpslavebase.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/tcpworkerbase.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/directorysizejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/forwardingslavebase.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/job.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/jobtracker.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/global.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/chmodjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/deletejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/copyjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/emptytrashjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/filejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/mkdirjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/mkpathjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/slavebase.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/slaveconfig.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/hostinfo.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/metadata.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/udsentry.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/jobuidelegateextension.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/jobuidelegatefactory.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/askuseractioninterface.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/slaveinterface.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/slave.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/filecopyjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/listjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/mimetypejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/mimetypefinderjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/multigetjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/restorejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/simplejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/specialjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/statjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/namefinderjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/storedtransferjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/transferjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/scheduler.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/authinfo.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/davjob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/desktopexecparser.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/filesystemfreespacejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/batchrenamejob.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/workerbase.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/workerfactory.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/forwardingworkerbase.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/http_worker_defaults.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/ioworker_defaults.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/job_base.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/jobclasses.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/ioslave_defaults.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/http_slave_defaults.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOCore/KIO" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/IdleSlave"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/ConnectionServer"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/TCPSlaveBase"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/TCPWorkerBase"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/DirectorySizeJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/ForwardingSlaveBase"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/Job"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/JobTracker"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/Global"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/ChmodJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/DeleteJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/CopyJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/EmptyTrashJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/FileJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/MkdirJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/MkpathJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/SlaveBase"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/SlaveConfig"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/HostInfo"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/MetaData"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/UDSEntry"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/JobUiDelegateExtension"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/JobUiDelegateFactory"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/AskUserActionInterface"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/SlaveInterface"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/Slave"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/FileCopyJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/ListJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/MimetypeJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/MimeTypeFinderJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/MultiGetJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/RestoreJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/SimpleJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/SpecialJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/StatJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/NameFinderJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/StoredTransferJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/TransferJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/Scheduler"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/AuthInfo"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/DavJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/DesktopExecParser"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/FileSystemFreeSpaceJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/BatchRenameJob"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/WorkerBase"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/WorkerFactory"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KIO/ForwardingWorkerBase"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOCore" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/kio/src/core/ksslcertificatemanager_p.h"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KACL"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KUrlAuthorized"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KCoreDirLister"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KRemoteEncoding"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KDirNotify"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KDiskFreeSpaceInfo"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KFileItem"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KFileItemListProperties"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KMountPoint"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KNFSShare"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KSambaShare"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KSambaShareData"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KPasswdServerClient"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KProtocolInfo"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KProtocolManager"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KRecentDocument"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KSslCertificateManager"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KSslErrorUiData"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KTcpSocket"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KFileFilter"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kacl.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kurlauthorized.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kcoredirlister.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kremoteencoding.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kdirnotify.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kdiskfreespaceinfo.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kfileitem.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kfileitemlistproperties.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kmountpoint.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/knfsshare.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/ksambashare.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/ksambasharedata.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kpasswdserverclient.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kprotocolinfo.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kprotocolmanager.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/krecentdocument.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/ksslcertificatemanager.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/ksslerroruidata.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/ktcpsocket.h"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kfilefilter.h"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/KSSLSettings"
    "/home/szybet/kdesrc/frameworks/kio/src/core/kssl/ksslsettings.h"
    "/home/szybet/kdesrc/build/frameworks/kio/src/core/kiocore_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/xdg" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kio/src/core/accept-languages.codes")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kio/src/core/qt_KIOCore.pri")
endif()

