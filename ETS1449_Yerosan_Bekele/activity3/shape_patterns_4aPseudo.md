# Problem analysis
+ **inputs** - No user inputs
+ **outputs** - The following patterns
  - rectangle with numbers
  - rectangle with capital letters
  - right angle triangle with numbers
+ **Processes** -
  - make a rectangle with numbers upto 5 and display result
  - make rectangle with capital letters, iterate 5 times and display result
  - make right angle triangle with numbers upto 5 and display result

# Algorithm design
## Pseudo code
+ step 1: start
+ step 2: initialize num to 5, count to 1 and letter to 'A'
+ step 3: make i equal 0
  - step 3.1: make j equal 1
    - step 3.1.1: print j
    - step 3.1.2: add 1 to j, check if j <= num, if yes go to step 3.1.1, if not go to step 3.2
  - step 3.2: make a new line
  - step 3.3: add 1 to i, check if i < num, if yes go to step 3.1, if not go to step 4
+ step 4: make i equal 0
  - step 4.1: make j equal 0
    - step 4.1.1: letter
    - step 4.1.2: add a letter to letter 
    - step 4.1.3: add 1 to j, check if j < num, if yes go to step 4.1.1, if not go to step 4.2
  - step 4.2: make a new line
  - step 4.3: add 1 to i, check if i < num, if yes go to step 4.1, if not go to step 5
+ step 5: make i equal 0
  - step 5.1: make j equal 1
    - step 5.1.1: print j
    - step 5.1.2: add 1 to j, check if j <= count, if yes go to step 5.1.1, if not go to step 5.2
  - step 5.2: make a new line
  - step 5.3: add 1 to count
  - step 5.3: add 1 to i, check if i < num, if yes go to step 5.1, if not go to step 6
+ step 6: end
