all: test1 test2 overloading
test1:
	g++ -std=c++20 test.cpp -o test
	./test
test2:
	g++ -std=c++20 test2.cpp -o test2
	./test2
overloading:
	g++ -std=c++20 overloading.cpp -o overl
	./overl

