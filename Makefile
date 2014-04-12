# Path to Aithon library
AITHON_LIBRARY = C:/Users/Brian/Dropbox/Aithon/AithonLibrary

# User source files
USERFOLDER = ./
USERSRC =$(addprefix $(USERFOLDER),$(wildcard *.c))

# User include paths
USERINC = ./

# Include the primary Aithon makefile
include $(AITHON_LIBRARY)/Aithon.mk
