CXX-g++
CXXFLAGS=-Wall -Wextra

SRCS=$(wildcard *.cpp)
OBJS=$(patsubst %.cpp, %.o, $(SRCS))
EXE=cw

run: $(EXE)
	./$(EXE)

all: $(EXE) 

$(EXE): $(OBJS)
	$(CXX) $(OBJS) -o$(EXE)

%.o %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o$@

clean:
	$(RM) $(EXE)
	$(RM) *.o

.PHONY all run clean
