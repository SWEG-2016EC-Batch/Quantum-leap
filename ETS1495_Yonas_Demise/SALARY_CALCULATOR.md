# Problem Analysis
**Input** - base salary, bonus rate, working hours\
**Output** - gross salary, bonus payment, net salary\
**Operation** - \
          - read the inputs\
          - calculate the bonus payment\ 
          - calcualate the gross salary\
          - calculate net salary\
          - print gross salary, bonus payment and net salary
# Algorithm Desigh
## Pseudocode
+ *step 1*: start
+ *step 2*: read base salary, working hours and bonus rate
+ *step 3*: calculate bonus payment as,
  
  ```
   bonus_payment = bonus_rate * working_hours
  ```
  
+ *step 4*: calculate gross salary as,
  
  ```
  gross_salary= base_salary + bonus_payment
  ````
  
+ *step 5*: calculate total deductions of pension(5%) and tax(15%)  as,
  
  ```
  deduction= ((gross_salary*0.5) + (gross_salary*0.15)
  ```
  
+ *step 6*: calculate net salary as,
  
  ```
  net_salary = gross_salary - deduction
  ```
  
+ *step 7*: print net salary
+ *step 8*: stop
  ## Flow Chart
```mermaid
graph TD;
    A([start]) --> B[/Read base_salary, working_hours, bonus_rate/];
    B -->C[bonus_payment=bonus_rate*working_hours
           gross_salary=base_salary+bonus_payment
           deduction=&#40;gross_salary*0.15&#41;+&#40;gross_salary*0.05&#41;
           net_salary=gross_salary-deduction];
    C -->D[/print net_salary/];
    D--> E([End]);





  
