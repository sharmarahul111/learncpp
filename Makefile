CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wpedantic -g
#
# %: %.cpp
# 	$(CXX) $(CXXFLAGS) $< -o $@
# clean:
# 	rm -rf *.out a.out
