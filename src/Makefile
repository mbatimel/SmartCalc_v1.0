CFLAGS = -Wall -Werror -Wextra -std=c11
ARCH = $(shell arch)
ifeq "$(ARCH)" "i386"
MYFLAGS = -lcheck -lpthread -lm  -I /usr/local/include -L/usr/local/lib
endif
ifeq "$(ARCH)" "x86_64"
MYFLAGS = -lcheck -lm -lpthread -lsubunit -g
endif

all: clean test gcov_report

dvi:
	open ../README.md

install:
	mkdir build
	cd build && cmake ../Front/Smart_calc && make
	rm -rf build

dist: install
	tar -czf calc.tar.gz ~/Calc/Smart_calc
	rm -rf ~/Calc

uninstall:
	rm -rf ~/Calc

vpath %.c Back:Back/tests/ test

test: Smart_calc_v1.c Back/calculate.c Back/parse.c Back/test.c 
	gcc $^ -o $@ $(CFLAGS) $(MYFLAGS) --coverage

gcov_report: test
	./test
	gcovr --html-details rep.html
	open rep.html

check:
	cp ../materials/linters/.clang-format ../src/.clang-format
	clang-format -i Back/*.c
	clang-format -i Back/tests/*.c
	clang-format -i Front/Smart_calc/*.cpp
	clang-format -i Front/Smart_calc/*.h
	clang-format -i *c
	clang-format -i *h
clean:
	rm -rf *.o *.gcda *.a *.html *.gcno *.css .clang-format build 
	rm -f test
	rm -rf *.tar.gz
	rm -rf Front/Smart_calc/*.o

rebuild: clean all