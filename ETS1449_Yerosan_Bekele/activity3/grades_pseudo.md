# Problem analysis
+ **inputs** - test result, quiz result, project mark, assignment result, final exam result
+ **output** - the total mark and grade
+ **process** -
  - read inputs (test, quiz, project, assignment, final_exam
  - check if inputs are valid
  - calculate total_mark as ```total_mark = quiz + test + project + assignment + final_exam```
  - give grade for corresponding total_mark values
# Algorithm design
## Pseudo code
+ step 1: start
+ step 2: read test and check if it is valid and less than or equal to 15 and greater than 0
+ step 3: read quiz and check if it is valid and less than or equal to 5 and greater than 0
+ step 4: read project and check if it is valid and less than or equal to 20 and greater than 0
+ step 5: read assignment and check if it is valid and less than or equal to 10 and greater than 0
+ step 6: read final_exam and check if it is valid and less than or equal to 50 and greater than 0
+ step 7: calculate total_mark as ```total_mark = quiz + test + project + assignment + final_exam``` will not exceed 100
+ step 8: if total_mark is greater than or equla to 90, give A+
+ step 9: if total_mark is greater than or equal to 80 and less than 90, give A
+ step 10: if total_mark is greater than or equal to 75 and less than 80, give B+
+ step 11: if total_mark is greater than or equal to 60 and less than 75, give B
+ step 12: if total_mark is greater than or equal to 55 and less than 60, give C+
+ step 13: if total_mark is greater than or equal to 45 and less than 55, give C
+ step 14: if total_mark is greater than or equal to 30 and less than 45, give D
+ step 15: if total_mark is is less than 30, give F
+ step 16: end
