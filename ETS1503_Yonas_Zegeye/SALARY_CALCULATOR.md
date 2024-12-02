# Problem Analysis
**Input** - baseSalary, bonusRatePerHour, weeklyWorkingHours\
**Output** - grossSalary, bonusPayment, netSalary\
**Operation** - \
          - Declare a float variable bonusRatePerHour,baseSalary,netSalary,paymentDeductions,bonuspayment,grossSalary and an int variable choice,weeklyWorkingHours, counter initialize counter by 0 and declare string variable employeeName\
          -check the While condition if true:
          - read employeeName baseSalary, bonusRatePerHour, weeklyWorkingHours\
          -Validate the inputs: baseSalary ,weeklyWorkingHOur to ensure it is greaterthan on or equal to 0,increment counter by 1
          If the input is invalid, read the inputs again again until counter =2.  
          - calculate the bonus payment as  bonusPayment = bonusRatePerHour * baseSalary\
          - calcualate the gross salary as grossSalary = baseSalary + bonuspayment \ 
          - calculate paymentDeductions and  net salary as paymentDeductions = 0.05 * baseSalary + grossSalary * 0.15 and netSalary = grossSalary - paymentDeductions\
          - print grossSalary, bonusPayment and netSalary
          - Read choice\
          - check if choice is 1 or 0 or invalid input\
            if 1 then read employeeName
            else if  0 then exit the program\
            else invalid input read choice again. 9\

# Pseudocode
- **step 1**: start
- **step 2**: check the while loop if:\
   2.1 true then go to step 3\
   2.2 false then go to step 11
- **step 3**: Read employeName
- **step 4**: Read baseSalary
- **step 5**: Increment counter by 1
- **step 6**: check if baseSalary >=0\
           6.1 then go to step 6\
           6.2 else if counter =1 or counter =2 go to step 3
           6.3 else goto end
- **step 7**: Initialize counter by 0 and increment by 1
- **step 8**: Read weeklyWorkingHours and  check weeklyWorkingHours >=0\
           8.1 then go to step 8\
           8.2 else if counter =1 or counter =2 go to step 6
           8.3 else go to end
- **step 9**: Read bonuPayment and check if bonusPayment >=0 and < 1\
           9.1 then go to step 9\
           9.2 else if counter =1 or counter =2 go to step 8
           9.3 else go to end
- **step 10**: calculate bonusPayment as,
  ```
   bonusPayment = bonusRatePerHour * weeklyWorkingHours
  ```
- **step 11**: calculate grossSalary as,
  ```
  grossSalary= baseSalary + bonusPayment
  ````
  
- **step 12**: calculate total deductions of pension(5%) and tax(15%)  as,
  ```
  0.05 * baseSalary + grossSalary * 0.15
  ```
- **step 13**: calculate netSalary as,
  ```
  netSalary = grossSalary - paymentDeductions
  ```
- **step 14**: print netSalary
- **step 15**: Read choice
- **step 16**: check if choice is 1 or 0 or invalid input\
            16.1 if 1 then go to step 3\
            16.2 else if  0 then go to step 17\
            16.3 else if  invalid input and counter = 1 o go to step 15\
            16.4 else goto step 17
- **step 17** End
  # Flowchart
```mermaid
graph TD;
A([start])--> B{check while}
B --> |true| c[/employeeName/] 
c--> C[/Read baseSalary/]
C --> D{check if baseSalary >=0}
D --> |No| F[Increment counter by 1]
F -->G{check if counter =1 0r 2}
G --> |counter = 1 ,2| C
G --> |counter = 3| P
D --> |yes| h[Re initialize counter to 0]
h --> E[/Read bonusPayement/]
E -->H{check if bonusPayement >= 0}
H -->|No| I[Increment counter by 1]
I --> J{check if counter =1 or counter =2}
J --> |counter = 1| E
J --> |counter = 2| P
H --> |yes| K[calculate bonusPayment,grossSalary,netSalary]
K --> L[/Print employeeName,grossSalary,bonusPayment,netSalary/]
L -->R[Re initialize counter to 0]
R -->N[/Read choice/]
N -->O{check if choice == 1 or 0 or invalid input}
O-->|choice = 1| c
O --> |invalid input | Q{check if counter =1 or 2}
Q --> |counter = 1| N
Q --> |counter =3| P
O -->|Choice 0| P([End])









  




 


