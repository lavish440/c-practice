rwildcard=$(foreach d, $(wildcard $1/*), $(call rwildcard, $d, $2) $(filter $(subst *, %, $2), $d))

SOURCES = $(call rwildcard, ., *.c)
EXECS = $(SOURCES:.c=)

CFLAGS = -Wall -O2 -Wextra -pedantic -Werror -DNDEBUG

DEBUG_CFLAGS = -Wall -Wextra -g3 -O0 -DDEBUG -fsanitize=address,undefined -fno-omit-frame-pointer

all: build

build: $(EXECS)

debug: CFLAGS = $(DEBUG_CFLAGS)
debug: clean $(EXECS)

clean:
	rm -rf $(EXECS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@
