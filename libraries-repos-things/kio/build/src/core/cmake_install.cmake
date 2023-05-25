# Install script for directory: /mnt/HDD/Project/Public/okulartry/kio/src/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.KDirNotify.xml" FILES "/mnt/HDD/Project/Public/okulartry/kio/src/core/org.kde.KDirNotify.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.KPasswdServer.xml" FILES "/mnt/HDD/Project/Public/okulartry/kio/src/core/org.kde.KPasswdServer.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE RENAME "kf5_org.kde.KSlaveLauncher.xml" FILES "/mnt/HDD/Project/Public/okulartry/kio/src/core/org.kde.KSlaveLauncher.xml")
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
           RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOCore.so.5.107.0"
    "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOCore.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
           NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
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
         RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/HDD/Project/Public/okulartry/kio/build/bin/libKF5KIOCore.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:"
         NEW_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5KIOCore.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOCore/kio" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/idleslave.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/connectionserver.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/tcpslavebase.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/tcpworkerbase.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/directorysizejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/forwardingslavebase.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/job.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/jobtracker.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/global.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/chmodjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/deletejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/copyjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/emptytrashjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/filejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/mkdirjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/mkpathjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/slavebase.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/slaveconfig.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/hostinfo.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/metadata.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/udsentry.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/jobuidelegateextension.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/jobuidelegatefactory.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/askuseractioninterface.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/slaveinterface.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/slave.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/filecopyjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/listjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/mimetypejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/mimetypefinderjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/multigetjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/restorejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/simplejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/specialjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/statjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/namefinderjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/storedtransferjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/transferjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/scheduler.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/authinfo.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/davjob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/desktopexecparser.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/filesystemfreespacejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/batchrenamejob.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/workerbase.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/workerfactory.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/forwardingworkerbase.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/http_worker_defaults.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/ioworker_defaults.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/job_base.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/jobclasses.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/ioslave_defaults.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/http_slave_defaults.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOCore/KIO" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/IdleSlave"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/ConnectionServer"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/TCPSlaveBase"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/TCPWorkerBase"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/DirectorySizeJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/ForwardingSlaveBase"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/Job"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/JobTracker"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/Global"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/ChmodJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/DeleteJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/CopyJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/EmptyTrashJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/FileJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/MkdirJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/MkpathJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/SlaveBase"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/SlaveConfig"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/HostInfo"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/MetaData"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/UDSEntry"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/JobUiDelegateExtension"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/JobUiDelegateFactory"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/AskUserActionInterface"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/SlaveInterface"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/Slave"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/FileCopyJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/ListJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/MimetypeJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/MimeTypeFinderJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/MultiGetJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/RestoreJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/SimpleJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/SpecialJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/StatJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/NameFinderJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/StoredTransferJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/TransferJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/Scheduler"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/AuthInfo"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/DavJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/DesktopExecParser"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/FileSystemFreeSpaceJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/BatchRenameJob"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/WorkerBase"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/WorkerFactory"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KIO/ForwardingWorkerBase"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KIOCore" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/ksslcertificatemanager_p.h"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KACL"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KUrlAuthorized"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KCoreDirLister"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KRemoteEncoding"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KDirNotify"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KDiskFreeSpaceInfo"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KFileItem"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KFileItemListProperties"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KMountPoint"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KNFSShare"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KSambaShare"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KSambaShareData"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KPasswdServerClient"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KProtocolInfo"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KProtocolManager"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KRecentDocument"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KSslCertificateManager"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KSslErrorUiData"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KTcpSocket"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KFileFilter"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kacl.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kurlauthorized.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kcoredirlister.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kremoteencoding.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kdirnotify.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kdiskfreespaceinfo.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kfileitem.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kfileitemlistproperties.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kmountpoint.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/knfsshare.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/ksambashare.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/ksambasharedata.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kpasswdserverclient.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kprotocolinfo.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kprotocolmanager.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/krecentdocument.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/ksslcertificatemanager.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/ksslerroruidata.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/ktcpsocket.h"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kfilefilter.h"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/KSSLSettings"
    "/mnt/HDD/Project/Public/okulartry/kio/src/core/kssl/ksslsettings.h"
    "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/kiocore_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/xdg" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kio/src/core/accept-languages.codes")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KIO" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/kio/build/src/core/qt_KIOCore.pri")
endif()

