# Problem Analysis
**Input** - test,quiz,project,assignment,finalExam,choice\
**Output** - netSalary\
**Operation** - Declare a double variable test,quiz,project,assignment,finalExam,totalMark and an int variable choice and variable counter and initialize it to 0\
          -check the While condition if true:
          - read test,quiz,project,assignment,finalExam
          -Validate the inputs: ensure the values of test, quiz,project ,assignment and final exam doesnot exceed their maximum value and be less than the minimum value.\
          - If the input is invalid, read the inputs again until counter equal to 2.\
        -  calculate total mark as ```  totalMark = test + quiz + project + assignment + finalExam```\
        - display grade of the studenet based on the following criteria:\
        if the totalMark >= 90 and <=100 display  A+
        if the totalMark >=80 display A
        if the totalMark >=75 display B+
        if the totalMark >=60 display B
        if the totalMark >=55 display C+
        if the totalMark >=45 display C
        if the totalMark >=30 display D
        if the totalMark>=0 display F

# Pseudocode 
- **step 1**: start
- **step 2**: check the while loop if:\
   2.1 true then go to step 3\
   2.2 false then go to step 24
- **step 3**: Read test
- **step 4**: Increment counter by 1
- **step 5**: check if test >=0 and test <=15\
           5.1 then go to step 6\
           5.2 else if counter = 1 go to step 3
           5.3 else goto end
- **step 6**: Reinitialize counter to 0. 
- **step 7**: increment counter by 1 and Read quiz and  
           7.1 then go to step 8\
           7.2 else if counter =1  go to step 7
           7.3 else go to step 24
- **step 8**: initialize counterby 0;
- **step 9**: increment counter by 1
- **step 10**: Read project
- **step 11**:check if project >=0 and project <=20
           11.1 then go to step 12\
           11.2 else if counter =1  go to step 9\
           11.3 else go to step 24
- **step 12**: re initialize counter to 0
- **step 13**: Increment counter by 1
- **step 14**: Read assignment
- **step 15**:check if assignment >=0 and assignment <=10
           15.1 then go to step 16
           15.2 else if counter = 1 go to step 13
           15.3 else go to step 24
- **step 16**: re initialize counter to 0
- **step 17**: Increment counter by 1
- **step 18**: Read finalExam
- **step 19**:check if finalExam >=0 and finalExam <=50
           19.1 then go to step 1
           19.2 else if counter = 1 go to step 17
           19.3 else go to step 24
- **step 20**: calculate totalMark as :
 ``` 
 totalMark = test + quiz + project + assignment + finalExam
```
- **step 21**:check totalMark
   - If `totalMark >= 90`:display "The student scored A+".
   - else if `totalMark >= 80`: display "Your grade is : A".
   - else if `totalMark >= 75`: display "Your grade is : B+".
   - else if `totalMark >= 60`: display "Your grade is : B".
   - else if `totalMark >= 55`: display "Your grade is : C+".
   - else if `totalMark >= 45`: display "Your grade is : C".
   - else if `totalMark >= 30`: display "Your grade is : D".
   - else if: `totalMark >= 0`: display "Your grade is : F".
- **step 21**: Re initialize counter to 0
- **step 22**: Increment counter by 1 and Read choice
- **step 23**: check if choice is 1 or 0 or invalid input\
            23.1 if 1 then go to step 3\
            23.2 else if  0 then go to step 24\
            23.3 else if  invalid input and counter = 1 go to step 22\
            23.4 else goto step 24
- **step 24** End
