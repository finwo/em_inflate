CC=cc
CFLAGS=-O3 -fomit-frame-pointer -Isrc -Iexample
OBJDIR=obj
LDFLAGS=

include lib/.dep/config.mk

$(OBJDIR)/%.o: example/../%.c
	@mkdir -p '$(@D)'
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)/%.o: src/../%.c
	@mkdir -p '$(@D)'
	$(CC) $(CFLAGS) -c $< -o $@

APP := em_inflate

OBJS := $(OBJDIR)/example/main.o
OBJS += $(OBJDIR)/src/em_inflate.o

all: $(APP)

$(APP): $(OBJS)
	$(CC) $^ $(LDFLAGS) -o $(APP)

clean:
	@rm -rf $(APP) $(OBJDIR)
