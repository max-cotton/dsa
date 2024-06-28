CXX = c++
CXXFLAGS = -Wall -I./include
SRCDIR = ./src
BUILDDIR = ./build
SOURCES = $(wildcard $(SRCDIR)/*.cpp)  # wildcard expands all .cpp files into list of targets
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)  # Iterate through SOURCES and change each target to corresponding .o file
TARGET = main

all: $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp  # For any target that matches $(BUILDDIR)/%.o, where % is the file
	$(CXX) $(CXXFLAGS) -c $< -o $@  # Compile $(BUILDDIR)/%.o to $(SRCDIR)/%.cpp

$(TARGET): $(OBJECTS)  # Require each .o file target to be met
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)  # Link all .o files into target executable

clean:
	rm $(BUILDDIR)/*.o  # Delete all .o files

