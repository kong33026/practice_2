main : main.o calculate_process.o 
	gcc -o main main.o calculate_process.o
clean :
	rm -f main main.o calculate_process.o
