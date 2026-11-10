CC = gcc
CFLAGS = -Wall -Wextra -std=c99

.PHONY: test solution clean

exam: exam.c
	$(CC) $(CFLAGS) exam.c -o exam

test: exam
	./exam | diff - expected_output.txt && echo PASS

solution:
	$(CC) $(CFLAGS) solution/solution.c -o solution_bin

clean:
	rm -f exam solution_bin
