# Problem Analysis
+ **Input** - num1 and num2
+ **Output** - num1 the power of num2
+ **Operation** -\
          - read inputs, num1 and num2\
          - calculate the power function\
          - display the result
# Algorithm Design
  ## Pseudocode
+ *step 1*: start
+ *step 2*: read num1 and num2
+ *step 3*: if num1 and num2 are both 0, then print `indeterminate` and go to 9
+ *step 4*: if num2 is greater than or equal to 0, then\
      - 4.1: initialize `i` and make it equal to 0\
      - 4.2: calculate power as `pow *= num1`\
      - 4.3: add 1 to `i`\
      - 4.4: check if `i` is less than num2\
          -4.4.1: if yes, go to 4.2 else go to step 8
+ *step 5*: calculate power as `pow *= num1`
+ *step 6*: add 1 to `num2`
+ step 7: if num2 equals 0, go to 8 else go to 5
+ step 8: print `pow`
+ step 9: stop

## Flowchart

![Untitled234](https://github.com/user-attachments/assets/8df201db-b303-4fe4-8d91-9e2490d0e7c0)
