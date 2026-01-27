*This project has been created as part of the 42 curriculum by josjimen.*

**--description--**

**push_swap** is a sorting algorithm project developed as part of the 42 curriculum.  
The objective is to sort a stack of integers(stack a) using a limited set of operations and an auxiliary stack (stack b), while minimizing the total number of operations.

This project focuses on algorithmic thinking, optimization, and rigorous input validation.  

Given a list of integers as arguments, the program outputs a sequence of operations that sorts the numbers in ascending order using only predefined stack operations.

For small input sizes, specialized sorting strategies are applied.  
For larger inputs, the project uses a chunk-based approach combined with cost-aware rotations to achieve efficient results within the constraints imposed by the subject.

**--instructions--**

1. To compile the program: 
	make

2. To execute the program: 
	./push_swap 3 -10 5 0 1

3. To check the result (a checker is provided):
	./push_swap 3 -10 5 0 1 | ./checker_linux  3 -10 5 0 1

**--resources--**

Peer-to-peer in 42 Madrid.

Reddit (r/42_school) - https://www.reddit.com/r/42_school/

Fellow students GitHub repositories from 42 Madrid
	@vimirand: https://github.com/VirMM99
	@ldel-val: https://github.com/luna7111

AI tools (such as Gemini and ChatGPT) were used as development support, mainly to: 
	Clarify algorithmic ideas and visualization
	Review cases related to parsing and overflow
	Help clean and refactor code while respecting Norminette

All final design decisions, implementations and validations were done by the author (@josjimen).