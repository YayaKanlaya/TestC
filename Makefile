all: TestC Box

Box.o:
	g++ -c Box.cpp

Box.a:
	ar crf libBox.a Box.o
	
TestC.o:
	g++ -Wall -O -I ${CURDIR} -c TestC.cpp

TestC: TestC.o
	g++ -LD:\Repo\lib TestC.o -o TestC
	
clean:
	@echo "Clean was called"
	rm TestC.o TestC.exe Box.o