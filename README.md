_This project has been created as part of the 42 curriculum by davimar3_

#	Description

This project receives a list of numbers as input and requires us to sort all numbers by using 11  operations such as push, swap, rotate and reverse rotate, with the use of two different stacks a and b.
Apart from all constraints we are also given a maximun number of operations allowed in order to have a successful project.
The goal is for us to learn about sorting algorithms, understand the difference between them and choose one that best suit our needs.

#	Instruction

For the compilation of the program follow the steps:

- use the command: 'Make' in order to create the libft library, the object files and compile the program.

- Call the name of the program, passing the numbers to be sorted:
./push_swap 9 5 8 6 3 4 2.

- For testing if the sorting algorithm is working correctly we also can utilize the checker_linux, available at the project's page at the intranet. The command is:
./push_swap 9 5 8 6 3 4 2 | ./checker_linux 9 5 8 6 3 4 2.
The checker will evaluate the operations and return OK if the numbers are sorted and KO if they are not sorted 

- For convinience, we can also create an array with the numbers, instead of repeating them:
ARR="9 5 8 6 3 4 2"; ./push_swap $ARR | ./checker_linux $ARR


#	Resources

For Resources I saw many videos on youtube and reserched on the website geeksforgeeks explaining diverse sorting algorithms.
Below is the link of the page talking about the algorithm I chose to use for this project, called quicksorting: 
https://www.geeksforgeeks.org/dsa/quick-sort-algorithm/