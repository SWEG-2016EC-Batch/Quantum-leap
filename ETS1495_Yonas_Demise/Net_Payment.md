# Problem Analysis
**Input** - base salary, bonus rate, working hours,extra work hours\
**Output** - net salary\
**Operation** - \
            - read the inputs\
            - calculate the bonus payment\
            - calcualate the gross salary\
            - Calculate total deductions\
            - calculate net salary\
            - print net salary
# Algorith Design
## Pseudocode
+ Step 1: Start
+ Step 2: Read the Inputs
+ Step 3: Check the working hours;\
      3.1. if working_hours >40, go to step 4\
      3.2. if working_hours <40, bonus==0 and go to step 5
+ Step 4: Calculate Bonus as,
     ```
     bonus= extra_working_hours*bonus_rate;
     ```
+ Step 5: Calculate gross_salary as,
  ```
  gross_salary=base_salary + bonus;
  ```
+ Step 6: Calculate tax deduction,\
     6.1. if base_salary < 200, tax==0\
     6.2. if base_salary >=200 && base_salary < 600,  tax= gross_salary\*0.1\
     6.3. if base_salary >=600 && base_salary < 1200,  tax= gross_salary\*0.15\
     6.4. if base_salary >=1200 && base_salary < 2000,  tax= gross_salary\*0.2\
     6.5. if base_salary >=2000 && base_salary < 3500,  tax= gross_salary\*0.25\
     6.6. if base_salary >=3500,  tax= gross_salary*0.3
+ Step 7: Calculate total deductions as,
  ```
  total_deductions= tax + (base_salary*0.07);
  ```
+ Step 8: Calculate net salary as,
  ```
  net_salary= (gross_salary)- total_deductions;
  ```
+ Step 9: Print net salary
+ Step 10; stop


  


  
