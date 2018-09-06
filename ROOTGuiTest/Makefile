all: ROOTGuiTest

ROOTGuiTest: ROOTGuiTest.o ROOTGuiDict.o
	g++ -o ROOTGuiTest ROOTGuiTest.o ROOTGuiDict.o `root-config --cflags --glibs`

ROOTGuiTest.o: src/ROOTGuiTest.cpp src/ROOTGuiTest.h
	g++ -o ROOTGuiTest.o -c src/ROOTGuiTest.cpp `root-config --cflags --glibs`

ROOTGuiDict.o: ROOTGuiDict.cpp
	g++ -o ROOTGuiDict.o -c ROOTGuiDict.cpp `root-config --cflags --glibs`

ROOTGuiDict.cpp: src/ROOTGuiTest.h src/ROOTGuiTestLinkDef.h
	rootcling -f ROOTGuiDict.cpp -c src/ROOTGuiTest.h src/ROOTGuiTestLinkDef.h
	
clean:
	rm -f *.o *.pcm ROOTGuiDict.cpp
