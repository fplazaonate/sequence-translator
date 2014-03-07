EXEC = sequence-translator

CC = g++
CFLAGS = --std=c++0x -Wall -Wextra -O3 -march=native
BOOST_LIBS = -lboost_program_options -lboost_filesystem -lboost_system
BOOST_LIBS_DIR = /opt/rstudio-tools/boost/boost_1_50_0/lib/
LDFLAGS = $(BOOST_LIBS) -L$(BOOST_LIBS_DIR)

SRC = $(wildcard *.cc)
OBJECTS = $(patsubst %.cc, %.o, $(SRC))

.PHONY : clean

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.cc
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) *.o
