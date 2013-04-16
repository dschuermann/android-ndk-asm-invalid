LOCAL_PATH:=$(call my-dir)

# Toolchain working
#NDK_TOOLCHAIN_VERSION=4.4.3
#NDK_TOOLCHAIN_VERSION=clang

# Toolchain not working:
#NDK_TOOLCHAIN_VERSION=4.6 # default
NDK_TOOLCHAIN_VERSION=4.7

# Optimizations
#APP_OPTIM:=release
APP_OPTIM:=debug

# Build target
APP_ABI:=x86

APP_PLATFORM:=android-9
#APP_PLATFORM:=android-14

# See for documentation on Androids c++ support: $(NDK_PATH)/docs/CPLUSPLUS-SUPPORT.html
# select c++ gnu stl, because we need exception support
APP_STL:=stlport_shared

# enable exceptions and rtti (information about data types at runtime)
APP_CPPFLAGS:=-fexceptions -frtti
APP_CFLAGS:=

# If APP_MODULES is not set, all modules are compiled!
APP_MODULES:=bug

