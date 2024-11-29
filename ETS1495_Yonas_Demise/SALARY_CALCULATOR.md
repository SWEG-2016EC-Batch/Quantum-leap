**Problem Analysis**
Input - base salary, bonus rate, working hours
Output - gross salary, bonus payment, net salary
Operation - read the inputs
          - calculate the bonus payment 
          - calcualate the gross salary
          - calculate net salary
          - print gross salary, bonus payment and net salary
**Pseudocode**
step 1: start
step 2: read base salary, working hours and bonus rate
step 3: calculate bonus payment as bonus payment = bonus rate * working hours
step 4: calculate gross salary as gross salary= base salary + bonus payment
step 5: calculate total deductions of pension(5%) and tax(15%)  as deduction= ((gross salary*0.5) + (gross salary*0.15)
step 6: calculate net salary as net salary = gross salary - deduction
step 7: print net salary
step 8: stop
