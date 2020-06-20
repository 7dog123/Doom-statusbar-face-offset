LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES = ST_FACE.c

LOCAL_MODULE := st_face

LOCAL_CFLAGS += -std=c99 -ffast-math

include $(BUILD_EXECUTABLE)
