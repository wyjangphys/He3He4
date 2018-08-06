CXX=g++

ROOTLIBS=$(shell root-config --libs) -lASImage -lRIO -lNet -lMinuit -lTMVA -lMLP -lXMLIO -lTreePlayer
ROOTINCS=-I${shell root-config --incdir} -I./include -I./

TARGET=KNUTreeMC

all : KNUTreeMC

$(TARGET) : Run.o KNUTreeMC.o
	$(CXX) $(CXXFLAGS) $(ROOTLIBS) $(ROOTINCS) -g -o $@ $^

Run.o : Run.cxx
	$(CXX) $(CXXFLAGS) $(ROOTLIBS) $(ROOTINCS) -g -c $^ -o $@

KNUTreeMC.o : KNUTreeMC.cxx
	$(CXX) $(CXXFLAGS) $(ROOTLIBS) $(ROOTINCS) -g -c $^.cxx -o $@


clean :
	rm -rfv Run.o
	rm -rfv KNUTree.o
	rm -rfv KNUTree
	rm -rfv main
