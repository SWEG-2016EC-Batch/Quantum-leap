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
         - 2.1. if base salary<=0,working hours<=0 or bonus rate<0 , go to step 2 and ask again
         - 2.2. if base salary>0, working hour >0, and bonus rate >0, go to step 3
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
  deduction= ((base_salary*0.05) + (gross_salary*0.15))
  ```
  
+ *step 6*: calculate net salary as,
  
  ```
  net_salary = gross_salary - deduction
  ```
  
+ *step 7*: print net salary
+ *step 8*: ask the user if he/she want to calculate again
        - 8.1. if the answer is yes, go to step 2
        - 8.2. if the answer is no, go to step 8
+ *step 8*: stop
  ## Flowchart
```mermaid
graph TD;
    A([start]) --> B[/Read: base_salary, working_hours, bonus_rate/];
    B -->C{cin.fail() || base_salary<=0 || working_hours<=0 || bonus_rate<0};
    C --> |False| D[bonus_payment=bonus_rate*working_hours;
    C --> |True| J([End]);
    D --> E[gross_salary=base_salary*bonus_payment];
    E --> F[deduction= ((base_salary*0.05) + (gross_salary*0.15))];
    F --> G[net_salary = gross_salary - deduction];
    G --> H{the user wants to calculate again};
    H --> |True| B[/Read: base_salary, working_hours, bonus_rate/];
    H --> |False| I[/print: net_salary/];
    I --> J([End]);
    





  
