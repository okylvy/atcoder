ARG = main
gcc_options = -std=c++17 -Wall --pedantic-errors

program : ${ARG}
	g++ $(gcc_options) $< -o $@

run : program
	./program

clean :
	rm -f ./program

.PHONY : run clean
