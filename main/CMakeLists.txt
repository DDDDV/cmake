PROJECT (main) #cmake项目名称 
CMAKE_MINIMUM_REQUIRED (VERSION 2.6) #版本
ADD_SUBDIRECTORY (src) #子目录，子目录中同样有cmakefile
AUX_SOURCE_DIRECTORY (. DIR_SRCS) #包含当前目录
ADD_EXECUTABLE (main ${DIR_SRCS}) #指定可执行程序名称
TARGET_LINK_LIBRARIES (main Test) #指定编译main时需要链接Test