MKDIR_P := mkdir -p
CXXFLAGS := -Wall -Werror
SRCS := $(wildcard src/*.cpp)
OBJS := $(addprefix objs/,$(notdir $(SRCS:.cpp=.o)))

.PHONY: all clean

all: $(OBJS)
	g++ -o main $^

objs/%.o: src/%.cpp
	g++ $(CXXFLAGS) -c $< -o $@ 

clean:
	rm -rf main
	rm -rf objs/
