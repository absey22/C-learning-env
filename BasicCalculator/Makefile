run_calculator : run_calculator.o test_calculator.o
	gcc -o run_calculator run_calculator.o
	gcc -o test_calculator test_calculator.o
	./test_calculator


run_calculator.o : run_calculator.c
	gcc -c run_calculator.c

test_calculator.o : test_calculator.c
	gcc -c test_calculator.c


clean :
	rm run_calculator run_calculator.o
	rm test_calculator test_calculator.o
