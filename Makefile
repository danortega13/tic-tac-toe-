MKDIR_P := mkdir -p
CXXFLAGS := -Wall -Werror
SRCS := $(wildcard src/*.cpp)
OBJS := $(addprefix objs/,$(notdir $(SRCS:.cpp=.o)))

.PHONY: all dirs clean

all: dirs $(OBJS)
	g++ -o main $^

objs/%.o: src/%.cpp
	g++ $(CXXFLAGS) -c $< -o $@ 

dirs:
	$(MKDIR_P) objs

clean:
	rm -rf main
	rm -rf objs
