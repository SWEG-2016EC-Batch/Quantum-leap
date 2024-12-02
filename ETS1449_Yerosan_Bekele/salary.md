# Problem Analysis
**Input** - name, baseSalary, bonusRate, weeklyHours\
**Output** - grossSalary, bonusPayment, netSalary\
**Operation** - \
          - read inputs\
          - calculate bonus payment\ 
          - calcualate gross salary\
          - calculate net salary\
          - print gross salary, bonus payment and net salary
# Algorithm Desigh
## Pseudocode
+ *step 1*: start
+ *step 2*: read baseSalary, weeklyHours and bonusRate and make constants `pension = 0.05` and `tax = 0.15`
+ *step 3*: calculate bonus payment as ``` bonusPayment = weeklyHours * (bonusRate / 100) * baseSalary```
  
+ *step 4*: calculate gross salary as ```grossSalary = baseSalary + bonusPayment```
  
+ *step 5*: calculate total `pensionAmount` and `taxAmount` as ```pensionAmount = baseSalary * pension``` and ```taxAmount = grossSalary * tax``` 
  
+ *step 6*: calculate net salary as ```netSalary = grossSalary - (pensionAmount + taxAmount)```
  
+ *step 7*: print name, grossSalary, bonusPayment, pensionAmount, taxAmount and netSalary
+ *step 8*: stop

## Flowchart

![Untitled234](https://github.com/user-attachments/assets/f8faed2b-778c-4f7a-99e8-9c97b77fd483)
