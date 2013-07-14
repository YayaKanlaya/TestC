all: Box.o libBox.a TestC.o TestC

Box.o:
	g++ -c Box.cpp
	
libBox.a:
	ar crf libBox.a Box.o
	
TestC.o:
	g++ -Wall -O -I ${CURDIR} -c TestC.cpp

TestC: TestC.o
	g++ -LD:\Repo\TestC TestC.o -lBox -o TestC
	
clean:
	@echo "Clean was called"
	rm TestC.o TestC.exe Box.o libBox.a