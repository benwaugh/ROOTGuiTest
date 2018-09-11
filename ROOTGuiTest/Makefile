all: ROOTGuiTest

ROOTGuiTest: ROOTGuiTest.o ROOTGuiDict.o
	g++ -o ROOTGuiTest ROOTGuiTest.o ROOTGuiDict.o `root-config --cflags --glibs`

%.o: src/%.cpp
	g++ -o $@ $< -c `root-config --cflags`

ROOTGuiDict.o: ROOTGuiDict.cpp
	g++ -o ROOTGuiDict.o -c ROOTGuiDict.cpp `root-config --cflags`

ROOTGuiDict.cpp: src/ROOTGuiTest.h src/ROOTGuiTestLinkDef.h
	rootcling -f ROOTGuiDict.cpp -c src/ROOTGuiTest.h src/ROOTGuiTestLinkDef.h
	
clean:
	rm -f *.o *.pcm ROOTGuiDict.cpp
