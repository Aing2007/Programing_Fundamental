CC = gcc
CFLAGS = -Wall -Wextra -std=c99

exam: exam.c
	$(CC) $(CFLAGS) exam.c -o exam

solution: solution/solution.c
	$(CC) $(CFLAGS) solution/solution.c -o solution_bin

verify: tools/verify_top3.c
	$(CC) tools/verify_top3.c -o verify

clean:
	rm -f exam solution_bin verify top3.dat
