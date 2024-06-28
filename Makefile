CXX = c++
CXXFLAGS = -Wall
SRCDIR = src
BUILDDIR = build
SOURCES = $(wildcard $(SRCDIR)/*.cpp)  # wildcard expands into list of targets
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)  # Iterate through SOURCES and change each file to build/file.o
TARGET = main

all: $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp  # For any target that matches $(BUILDDIR)/%.o, replace % with the file
	$(CXX) $(CXXFLAGS) -c $< -o $@  # Compile $(BUILDDIR)/%.o to $(SRCDIR)/%.cpp

$(TARGET): $(OBJECTS)  # Require each object file target to be met
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)  # Link all object files into target executable

clean:
	rm build/*.o

