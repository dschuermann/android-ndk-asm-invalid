LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := bug

LOCAL_SRC_FILES := ClassA.cpp

include $(BUILD_SHARED_LIBRARY)