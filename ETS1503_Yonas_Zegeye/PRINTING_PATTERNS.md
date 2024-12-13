# problem analysis
 **Input** - &nbsp;&nbsp; userMainchoice , userMenuChoice,rowLength,columnLength\ 
 **Output** - different types of pattern: Number Rectangle Alphabet Rectangle, Number Triangle, Descending Number Pyramid,Alphabet Triangle,Small Letter Alphabet Rectangle, Hollow Rectangle,Inverted Half Pyramid Hollow Inverted Half Pyramid,Full Pyramid, Inverted Full Pyramid and Hollow Pyramid. \ **Operation** : Declare a a variable userMainMenuChoice, userMenuChoice,rows,columnLength,columns,rowLength\
 -check the While condition if true: - read userMainchoice, userMainMenuChoice and if the choice is not valid validate the userchoice. if userMainMenuChoice is = 1\
Main Menu:

Display the main menu options.

Read userMainMenuChoice.

Validate userMainMenuChoice.

If invalid, prompt the user again.

If valid, proceed based on the choice.

Secondary Menu:

Display the secondary menu options.

Read userMenuChoice.

Validate userMenuChoice.

If invalid, prompt the user again.

If valid, proceed based on the choice.

# Pseudocode
**Step 1**: Start
**Step 2**: Check while condition
  - If true, proceed to step 3
  - If false, go to step 47
**Step 3**: Declare variables:
  - `userMainMenuChoice`
  - `userMenuChoice`
  - `rows`
  - `columns`
  - `rowLength`
  - `columnLength`
**Step 4**: Display the main menu options
**Step 5**: Read `userMainMenuChoice`
**Step 6**: Validate `userMainMenuChoice`
 6.1 - If invalid, display "Invalid input! Please choose a valid option." and go to step 4
 6.2- If valid, proceed to step 7
**Step 7**: Display the secondary menu options
**Step 8**: Read `userMenuChoice`
**Step 9**: Validate `userMenuChoice`
 9.1 - If invalid, display "Invalid input! Please choose value on the list." and go to step 7
 9.2 - If valid, proceed to step 10
**Step 10**: Check `userMainMenuChoice`
10.1  - If `userMainMenuChoice` is 0, display "Exiting the program. Goodbye!" and proceed to step 47
10.2  - If `userMainMenuChoice` is 1, proceed to step 11
10.3  - If `userMainMenuChoice` is 2, proceed to step 14
10.4  - If `userMainMenuChoice` is 3, proceed to step 17
10.5  - If `userMainMenuChoice` is 4, proceed to step 20
10.6  - If `userMainMenuChoice` is 5, proceed to step 23
10.7  - If `userMainMenuChoice` is 6, proceed to step 26
10.8  - If `userMainMenuChoice` is 7, proceed to step 29
10.9  - If `userMainMenuChoice` is 8, proceed to step 32
10.1.1  - If `userMainMenuChoice` is 9, proceed to step 35
10.1.2  - If `userMainMenuChoice` is 10, proceed to step 38
10.1.3  - If `userMainMenuChoice` is 11, proceed to step 41
10 .1.4 - If `userMainMenuChoice` is 12, proceed to step 44

### Number Rectangle (Case 1)
**Step 11**: Check `userMenuChoice`
  11.1- If 0, go to step 4
  11.2- If 1, display example and proceed to step 12
  11.3- If 2, proceed to step 13
**Step 12**: Display example of Number Rectangle pattern
  - Go to step 7
**Step 13**: Read `rowLength` and `columnLength`
  13.1- Print Number Rectangle pattern with given dimensions
  13.2- Go to step 4
### Alphabet Rectangle (Case 2)
**Step 14**: Check `userMenuChoice`
 14.1 - If 0, go to step 4
 14.2 - If 1, display example and proceed to step 15
 14.3 - If 2, proceed to step 16
**Step 15**: Display example of Alphabet Rectangle pattern
 15.1 - Go to step 7
**Step 16**: Read `rowLength` and `columnLength`
  16.1- Print Alphabet Rectangle pattern with given dimensions
  16.2- Go to step 4
### Number Triangle (Case 3)
**Step 17**: Check `userMenuChoice`
 17.1 - If 0, go to step 4
 17.2 - If 1, display example and proceed to step 18
 17.3 - If 2, proceed to step 19
**Step 18**: Display example of Number Triangle pattern
 18.1- Go to step 7
**Step 19**: Read `rowLength`
  19.1- Print Number Triangle pattern with given dimensions
  19.2- Go to step 4
### Descending Number Pyramid (Case 4)
**Step 20**: Check `userMenuChoice`
 20.1 - If 0, go to step 4
 20.2 - If 1, display example and proceed to step 21
 20.3 - If 2, proceed to step 22
**Step 21**: Display example of Descending Number Pyramid pattern
**Step 22**: Read `rowLength`
 22.1- Print Descending Number Pyramid pattern with given dimensions
 22.2- Go to step 4
### Alphabet Triangle (Case 5)
**Step 23**: Check `userMenuChoice`
 23.1 - If 0, go to step 4
 23.2 - If 1, display example and proceed to step 24
 23.3 - If 2, proceed to step 25
**Step 24**: Display example of Alphabet Triangle pattern
  24.1 - Go to step 7
**Step 25**: Read `rowLength`
  25.1- Print Alphabet Triangle pattern with given dimensions
  25.2- Go to step 4
### Small Letter Alphabet Rectangle (Case 6)
**Step 26**: Check `userMenuChoice`
  26.1- If 0, go to step 4
  26.2- If 1, display example and proceed to step 27
  26.3- If 2, proceed to step 28
**Step 27**: Display example of Small Letter Alphabet Rectangle pattern
  27.1- Go to step 7
**Step 28**: Read `rowLength` and `columnLength`
  28.1- Print Small Letter Alphabet Rectangle pattern with given dimensions
  28.2- Go to step 4
### Hollow Rectangle (Case 7)
**Step 29**: Check `userMenuChoice`
 29.1 - If 0, go to step 4
 29.2 - If 1, display example and proceed to step 30
 29.3 - If 2, proceed to step 31
**Step 30**: Display example of Hollow Rectangle pattern
  30.1 - Go to step 7
**Step 31**: Read `rowLength` and `columnLength`
  31.1- Print Hollow Rectangle pattern with given dimensions
  31.2- Go to step 4
### Inverted Half Pyramid (Case 8)
**Step 32**: Check `userMenuChoice`
  32.1- If 0, go to step 4
  32.2- If 1, display example and proceed to step 33
  32.3- If 2, proceed to step 34
**Step 33**: Display example of Inverted Half Pyramid pattern
 33.1 - Go to step 7
**Step 34**: Read `rowLength`
  34.1- Print Inverted Half Pyramid pattern with given dimensions
  34.2- Go to step 4
### Hollow Inverted Half Pyramid (Case 9)
**Step 35**: Check `userMenuChoice`
  35.1- If 0, go to step 4
  35.2- If 1, display example and proceed to step 36
  35.3- If 2, proceed to step 37
**Step 36**: Display example of Hollow Inverted Half Pyramid pattern
  36.1- Go to step 7
**Step 37**: Read `rowLength`
  37.1- Print Hollow Inverted Half Pyramid pattern with given dimensions
  37.2- Go to step 4
### Full Pyramid (Case 10)
**Step 38**: Check `userMenuChoice`
  38.1- If 0, go to step 4
  38.2- If 1, display example and proceed to step 39
  38.3- If 2, proceed to step 40
**Step 39**: Display example of Full Pyramid pattern
  39.1- Go to step 7
**Step 40**: Read `rowLength`
  40.1- Print Full Pyramid pattern with given dimensions
  40.2- Go to step 4
### Inverted Full Pyramid (Case 11)
**Step 41**: Check `userMenuChoice`
  41.1- If 0, go to step 4
  41.2- If 1, display example and proceed to step 42
  41.3- If 2, proceed to step 43
**Step 42**: Display example of Inverted Full Pyramid pattern
  42.1- Go to step 7
**Step 43**: Read `rowLength`
  43.1- Print Inverted Full Pyramid pattern with given dimensions
  43.2- Go to step 4
### Hollow Full Pyramid (Case 12)
**Step 44**: Check `userMenuChoice`
  44.1- If 0, go to step 4
  44.2- If 1, display example and proceed to step 45
  44.3- If 2, proceed to step 46
**Step 45**: Display example of Hollow Full Pyramid pattern
  45.1 - Go to step 7
**Step 46**: Read `rowLength` and `columnLength`
  46.1- Print Hollow Full Pyramid pattern with given dimensions
  46.2- Go to step 4
**Step 47**: End
