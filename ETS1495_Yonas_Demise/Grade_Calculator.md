# Problem Analysis
+ **Input** - test,quiz,project,assignment,final exam
+ **Output** - Grade
+ **Operation** - 
                - read the inputs\
                - calculate total mark \
                - calculate Grade\
                - print Grade
# Algorithm Design
## Pseudocode
+ Step 1: Start
+ Step 2: Read Inputs
+ Step 3: Calculate total mark as,\
       ```
      total_mark = test + quiz + project + assignment + final_exam;
      ```
+ Step 4: Determine Grade as,\
     4.1. if total_mark >=90 , grade== A+\
     4.2. if total_mark >=80 && total_mark < 90 , grade== A\
     4.3. if total_mark >=75 && total_mark < 80 , grade== B+\
     4.4. if total_mark >=60 && total_mark < 75 , grade== B\
     4.5. if total_mark >=55 && total_mark < 60 , grade== C+\
     4.6. if total_mark >=45 && total_mark < 55 , grade== C\
     4.7. if total_mark >=30 && total_mark < 45 , grade== D\
     4.8. if total_mark < 30 && total_mark > 0  , grade== F
+ Step 5: Print grade
+ Step 6: Stop
