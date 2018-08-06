CXX=g++

ROOTLIBS=$(shell root-config --libs) -lASImage -lRIO -lNet -lMinuit -lTMVA -lMLP -lXMLIO -lTreePlayer
ROOTINCS=-I${shell root-config --incdir} -I./include -I./

TARGET=KNUTree

all : KNUTree

KNUTree : Run.o KNUTree.o
	$(CXX) $(CXXFLAGS) $(ROOTLIBS) $(ROOTINCS) -g -o $@ $^

Run.o : Run.cxx
	$(CXX) $(CXXFLAGS) $(ROOTLIBS) $(ROOTINCS) -g -c $^ -o $@

KNUTree.o : KNUTree.cxx
	$(CXX) $(CXXFLAGS) $(ROOTLIBS) $(ROOTINCS) -g -c $^ -o $@


clean :
	rm -rfv Run.o
	rm -rfv KNUTree.o
	rm -rfv KNUTree
	rm -rfv main
