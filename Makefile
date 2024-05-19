APP := em_inflate

CC=cc
CFLAGS=-O3 -fomit-frame-pointer -Isrc -Iexample
OBJDIR=obj
LDFLAGS=

SRC:=$(wildcard example/*.c)
SRC+=$(wildcard src/*.c)

include lib/.dep/config.mk

CFLAGS+=$(INCLUDES)
OBJ=$(SRC:.c=.o)

default: $(APP)

$(APP): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

clean:
	@rm -rf $(APP) $(OBJDIR)
