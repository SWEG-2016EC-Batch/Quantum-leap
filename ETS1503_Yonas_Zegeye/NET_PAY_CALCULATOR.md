# Problem Analysis
**Input** - baseSalary, bonusRatePerHour, weeklyWorkingHours\
**Output** - netSalary\
**Operation** - Declare a float variable bonusRatePerHour,baseSalary netSalary,bonuspayment,grossSalary,pension,incomeTax and an int variable choice,weeklyWorkingHours, counter initialize counter by 0.\
          -check the While condition if true:
          - read baseSalary, weeklyWorkingHours and if weeklyWorkingHours greater than 40 read bonusRatePerHour\
          -Validate the inputs: baseSalary ,weeklyWorkingHOur and also the bonusRatePerHour to ensure it is greaterthan on or equal to 0,increment counter by 1
          If the input is invalid, read the inputs again until counter =2.  
        -  if weeklyWorkingHours > 40 calculater the bonus payment as 
        ``` extraWorkingHours = weeklyWorkingHours - 40```. and\
         ```bonuspayment = bonusRatePerHour * extraWorkingHours``` and the gross salary as ```grossSalary = baseSalary + bonuspayment```
         pension as ``` pension = 0.07 * baseSalary ```\
          - else  calculate gross salary and pension  \
     gross salary as ``` grossSalary = baseSalary``` and pension as 
     ``` pension= 0.07*baseSalary```\
        - calculate taxes using the  table given based on the baseSalary of the employee and calculate it from the gross salary.
        -calculate the net salary as``` netSalary = grossSalary - pension-incomeTax```\
          - Read choice\
          - check if choice is 1 or 0 or invalid input\
            if 1 then read baseSlary
            else if  0 then exit the program\
            else invalid input read choice again. 9\

# Pseudocode
- **step 1**: start
- **step 2**: check the while loop if:\
   2.1 true then go to step 3\
   2.2 false then go to step 22
- **step 3**: Read baseSalary
- **step 4**: Increment counter by 1
- **step 5**: check if baseSalary >=0\
           5.1 then go to step 6\
           5.2 else if counter = 1 go to step 3
           5.3 else goto step 22
- **step 6**: Reinitialize counter to 0. 
- **step 7**: increment counter by 1 and Read weeklyWorkingHours and  check weeklyWorkingHours >=0\
           7.1 then go to step 8\
           7.2 else if counter =1  go to step 7
           7.3 else go to step 22
- **step 8**: initialize counterby 0;
- **step 9**: increment counter by 1
- **step 10**: If weeklyWorkingHours > 40 
           10.1 then go to step 11\
           10.2 else go to step 15
- **step 11**: re initialize counter to 0
- **step 12**: Increment counter by 1
- **step 13**: Read bonuPayment and check if bonusPayment >=0 and < 1\
           13.1 then go to step 14
           13.2 else if counter =1 go to step 12
           13.3 else go to step 22
- **step 14**: calculate bonusPayment as,
  ```
   bonusPayment = bonusRatePerHour * weeklyWorkingHours
  ```
- **step 15**: calculate grossSalary as,
  ```
  grossSalary= baseSalary + bonusPayment
  ````
  
- **step 16**: calculate pension as,
  ```
  pension= gross_salary*0.07
  ```
- **step 17**: calculate netSalary as,
  ```
  netSalary = grossSalary - pension-incomeTax
  ```
- **step 18**: print netSalary
- **step 19**: re initialize counter to 0
- **step 20**: Increment counter by 1 and Read choice
- **step 21**: check if choice is 1 or 0 or invalid input\
            21.1 if 1 then go to step 3\
            21.2 else if  0 then go to step 22\
            21.3 else if  invalid input and counter = 1 go to step 20\
            21.4 else goto step 22
- **step 22** End
