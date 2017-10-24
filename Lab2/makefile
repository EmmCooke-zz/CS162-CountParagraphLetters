CXX = g++
CXXFLAGS =  -std=c++0x
CXXFLAGS +=   -Wall
CXXFLAGS +=   -pedantic-errors
CXXFLAGS +=   -g
#CXXFLAGS +=   -O3
LDFLAGS =  -lboost_date_time
OBJS =  main.o output_letters.o count_letters.o
SRCS = main.cpp output_letters.cpp count_letters.cpp 
HEADERS = output_letters.hpp count_letters.hpp

#target: dependencies
#rule to build
#

Lab2: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o Lab2

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c   $(@:.o=.cpp)

.PHONY: clean
clean:
	rm ${OBJS} Lab2