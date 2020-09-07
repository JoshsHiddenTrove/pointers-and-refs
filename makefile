# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: main

# runs for "make main"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and main.cpp will be monitored for changes to know if it needs to be re-made
main: Q16.o pe3_references.o
	$(CXX) $(CXXFLAGS) pe3_references.o Q16.o -o main # name of output should be consistent

Point.o: Point.cpp Point.h
	$(CXX) $(CXXFLAGS) -c Q16.cpp

pe3_references.o: pe3_references.cpp
	$(CXX) $(CXXFLAGS) -c pe3_references.cpp # name of output should be consistent

#DependsOn2.o: DependsOn2.cpp
#    $(CXX) $(CXXFLAGS) -c DependsOn2.cpp

# runs for "make clean"
clean:
	rm *.o main  #include all targets here