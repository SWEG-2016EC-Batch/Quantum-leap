# Problem Analysis
+ **Input** - weight and height
+ **output** - Body Mass Index
+ **operation** - read the inputs, height and weight\
             - calculate the Body Mass Index as, BMI=weight/(height*height)\
             - dispaly BMI\
             - check the BMI value and display the message(underweight,overweight or normal weight) :\
                           - if BMI<18, the person is underweight\
                           - if BMI>25, the person is overweight\
                           - if 18< BMI < 25, the person is normal weight
#Algorithm Design
   ##Pseudocode 
 + *step 1*: start
 + *step 2*: read the inputes, weight and height
 + *step 3*: check if the inputes are positive value:\
               - 3.1: if weight<=0 or height<=0, goto step 7\
               - 3.2: if weight>0 or height>0, goto step 4\
+ *step 4*: calculate Body Mass Index as, BMI=weight/(height*height)\
+ *step 5*: display BMI
+ *step 6*: check the BMI value and display the message:\
              - 6.1: if BMI<18, "you are underweight"\
              - 6.2: if BMI>25, "you are overweight"\
              - 6.3: if 18<BMI<25, "your weight is normal"
+ *step 7*: ask if the person wants to calculate again:\
              - 7.1: if the answer is yes, go to step 2\
              -  7.2: if the answer is no, go to step 8\
+ *step8*: stop

  


            
