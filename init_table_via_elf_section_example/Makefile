PROGS := test

objects := $(patsubst %.c,%.o,$(wildcard *.c))

LD_FLAGS := -T ldscript.lds

.PHONY: all clean

test: $(objects)
	gcc ${LD_FLAGS} -o test $(objects)

all: ${PROGS}

clean:
	-rm ${objects}
	-rm ${PROGS}
