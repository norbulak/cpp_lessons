all: test1 test2
test1:
	g++ test.cpp -o test
	./test
test2:
	g++ test2.cpp -o test2
	./test2
overloading:
	g++ overloading.cpp -o overl
	./overl

