# Problem analysis
+ **inputs** - basic_salary, worked_hours, bonus_rate (in percentage),  overtime_bonus rate (in percentage) (if there is any)
+ **outputs** -
  - gross_salary
  - bonus amount
  - overtime bonus amount
  - pension deduction
  - tax deduction
  - net pay
+ **process** -
  - read inputs
  - validate inputs
  - find bonus amount per hour from bonus rate and basic salary
  - if there is any, find over time bonus amount per hours from overtime bonus rate and basic salary
  - calculate gross salary as ```gross_salary = basic_salary + (worked_hours * bonus_per_hour)```
  - if worked hours exceed 40, update gross salary as ```gross_salary += (worked_hours - 40) * overtime_bonus_amount```
  - make pension deduction from the basic salary
  - make tax deduction base of the amount of gross salary
  - calculate net pay as ```net_salary = gross_salary - pension_deduction - tax_deduction```
  - display gross salary, bonus amount, ovetime bonus amount (if any), tax and pension deduction and the net pay
# Algorithm design
## Pseudo code
+ step 1: start
+ step 2: initiate overtime_bonus_rate as 0 and make pension constant with value 0.07
+ step 3: read inputs basic_salary, worked_hours, bonus_rate and check if they are valid and greater than 0
+ step 4: divide bonus_rate with 100 since it is in percentage form
+ step 5: calculate bonus_per_hour as ```basic_salary * bonus_rate```
+ step 6: if worked_hours is greater than 40, read overtime_bonus_rate
  - step 6.1: validate the input and check if its between 0-100
  - step 6.1: divide overtime_bonus_rate with 100 since it is in percentage form
  - step 6.2: calculate overtime_bonus_amount as ```overtime_bonus_rate * basic_salary```
+ step 7: calculate gross_salary as ```basic_salary + (worked_hours * bonus_per_hour)```
+ step 8: if worked_hours > 40 then update gross_salary as ```gross_salary += (worked_hours - 40) * overtime_bonus_amount```
+ step 9: calculate pension_deduction as ```basic_salary * pension```
+ step 10: if gross_salary is less than 200 then make tax_deduction 0
+ step 11: if gross_salary is between 200-600 then calculate tax_deduction as ```tax_deduction = gross_salary * 0.10```
+ step 12: if gross_salary is between 600-1200 then calculate tax_deduction as ```tax_deduction = gross_salary * 0.15```
+ step 13: if gross_salary is between 1200-2000 then calculate tax_deduction as ```tax_deduction = gross_salary * 0.20```
+ step 14: if gross_salary is between 2000-3500 then calculate tax_deduction as ```tax_deduction = gross_salary * 0.25```
+ step 15: if gross_salary is above 3500 then calculate tax_deduction as ```tax_deduction = gross_salary * 0.30```
+ step 16: calculate net_salary as ```net_salary = gross_salary - pension_deduction - tax_deduction```
+ step 17: print gross salary, total bonus amount, total overtime bonus amount (if any), pension and tax deduction and net pay
+ step 18: end
