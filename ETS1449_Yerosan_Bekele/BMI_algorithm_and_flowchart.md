# Problem Analysis
+ **Input** - weight and height
+ **operation** -\
             - read inputs, height and weight\
             - calculate the BMI as BMI=weight/(height*height)\
             - check the BMI value (underweight,overweight or normal weight)
+ **output** - Body Mass Index
# Algorithm Design
 ## Pseudocode 
 + *step 1*: start
 + *step 2*: read the inputs, `user_weight` and `user_height`
 + *step 3*: check if inputs are numerals and greater than 0:\
                 3.1. if they are, go to step 4\
                 3.2. if not, print ```Invalid input please try again!``` and go to step 2
+ *step 4*: calculate Body Mass Index as ```BMI=weight/(height*height)```
+ *step 5*: Check BMI value\
          5.1. if BMI<18.5, "you are underweight"\
          5.2. if BMI>25, "you are overweight"\
          5.3. else, "your weight is normal"
+ *step 6*: ask ```Do you want to continue?\ny for yes | other key for no:```\
                7.1. if yes, go to step 2\
                7.2. if no, go to step 7
+ *step 7*: stop

  ## Flowchart

![Untitled Diagram](https://github.com/user-attachments/assets/d6aedf88-e439-43f8-8ac1-81c867352753)
