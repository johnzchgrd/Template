#TODO:
#     fvisibility
#     versionscript
CC := gcc
Verbose := false
#Verbose
export CMD_PREFIX := @
ifeq ($(Verbose),true)
	CMD_PREFIX :=
endif
 
# default as DEBUG mode
# Build and output paths
debug: export BINARY_PATH := bin/debug/
debug: export BIN_NAME := main
debug: export SO_NAME := test
debug: export BUILD_PATH := build/debug
debug: export BIN_PATH := bin/debug
debug: export LIB_NAME := lib$(SO_NAME).so
release: export BINARY_PATH := bin/release/
release: export BIN_NAME := main
release: export SO_NAME := test
release: export LIB_NAME := lib$(SO_NAME).so
release: export BUILD_PATH := build/release
release: export BIN_PATH := bin/release

debug: mkdirs
#make lib
	$(CMD_PREFIX)make -C lib debug
	$(CMD_PREFIX)cp lib/$(BIN_PATH)/$(LIB_NAME) $(BINARY_PATH)$(LIB_NAME)
#make src
	$(CMD_PREFIX)make -C src debug
	$(CMD_PREFIX)cp src/$(BIN_PATH)/$(BIN_NAME) $(BINARY_PATH)$(BIN_NAME)
#run binary
	@echo "***Process Started***"
	@$(BINARY_PATH)$(BIN_NAME)
	@echo "***Process Ended***"

release: mkdirs
#make lib
	$(CMD_PREFIX)make -C lib release
	$(CMD_PREFIX)cp lib/$(BIN_PATH)/$(LIB_NAME) $(BINARY_PATH)$(LIB_NAME)
#make src
	$(CMD_PREFIX)make -C src release
	$(CMD_PREFIX)cp src/$(BIN_PATH)/$(BIN_NAME) $(BINARY_PATH)$(BIN_NAME)
#run binary
	@echo "***Process Started***"
	@$(BINARY_PATH)$(BIN_NAME)
	@echo "***Process Ended***"

.PHONY:mkdirs
mkdirs:
	@echo "Creating directories $(BINARY_PATH)"
	@mkdir -p $(BINARY_PATH)

.PHONY:clean
clean:
	-make -C src clean
	-make -C lib clean

cleanall:clean
	-rm -r bin