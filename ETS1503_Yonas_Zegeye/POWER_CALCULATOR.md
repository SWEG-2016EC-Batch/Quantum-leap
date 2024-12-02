# Problem Analysis

**Input**: baseNumber , exponentNumber and choice\
**Output**: poweredNumber
**operation**: - declare a double type variable baseNumber,exponentNumber,poweredNumber. declare and intitialize an integer variable counter1,counter2,counter3,counter4 and intitialize all by 0.\
              -check the While condition if true:\
              - Read baseNumber , exponentNumber and choice\
              -Validate the inputs:baseNumber , exponentNumber and 
              increment all the counter variables by 1.\
              -If the input is invalid, read the inputs again until counter1=2,counter2=2,counter3=2,counter4=2 respectively .\
              - calculate poweredNumber
              compute for special case when the exponent is when:\
              0 raised to negative number,negative base raised to non-integer,0 base raised to negative exponent number.\
              - Display baseNumber,exponentNumber,poweredNumber.\
              - Read choice\
              - check if choice is 1 or 0 or invalid input\
                if 1 then read employeeName
              else if invalid check if counter =1 or counter =2 read choice again else end the program.
# Pseudo code

- **step 1**: Start

- **step 2**: check the while loop if:\

   2.1 true then go to step 3\
   2.2 false then go to step 16

- **step 3**:Read baseNumber

- **step 4**:Increment counter1 by 1

- **step 5**: check if baseNumber is  a number\
           5.1 then go to step 5\
           5.2 else if counter1 =1 or counter1 =2 go to step 3
           5.3 else goto 16

- **step 6**:Read exponentNumber

- **step 7**:Increment counter2 by 1

- **step 8**: check if exponentNumber is  a number\
           8.1 then go to step 5\
           8.2 else if counter2 =1 or counter2 =2 go to step 3
           8.3 else goto 16

- **step 9**: calculate poweredNumber as:

```
 poweredNumber = pow(baseNumber,exponentNumber)
```
- **step 10**: check if baseNumber == 0 && exponentNumber < 0   
            10.1 then display a message for the user.
            10.2 else goto step 11

- **step 11**: check if baseNumber<0 and exponent number is non integer number    - 11.1 then display a message for the user.
          - 11.2 else goto step 12

- **step 12**:check if baseNumber and exponentNumber are 0
                - 12.1 then display a message for the user.
                - 12.2 else display poweredNumber.

- **step 13**:Increment counter3 by 1.

- **step 14**: Read choice

- **step 15**: check if choice is 1 or 0 or invalid input\
             15.1 if 1 then go to step 3\
             15.2 else if 0 go to end
             15.3 else if counter2 =1  go to step 14\
             15.4 goto step 16
- **step 16** End
# Flowchart
```mermaid
graph TD;
A([start])--> B{check while}
B --> |true| C[/Read baseNumber/]
C --> D{check if baseNumber is valid number}
D --> |No| g[Increment counter1 by 1]
g -->G{check if counter1 =1}
G --> |counter1 = 1| C
G --> |counter1 = 2| P
D --> |yes| E[/Read exponentNumber/]
E -->H{check if exponentNumber is a valid number}
H -->|No| I[Increment counter2 by 1]
I --> J{check if counter2 =1}
J --> |counter2 = 1| E
J --> |counter2 = 2| P
H --> |yes| k[calculate poweredNumber]
k --> L{check if check if baseNumber == 0 && exponentNumber < 0}
L --> |False| S{check if baseNumber<0 and exponent number is non integer}
L --> |True| M[/display error message/]
S -->|True| s[/Display error message/]
S --> |False| T{check if check if baseNumber and exponentNumber are 0}
T --> |True| t[/Display error message/]
T --> |False| U[/Display poweredNumber/]
U -->N[/Read choice/]
N -->O{check if choice == 1 or 0 or invalid input}
O-->|choice = 1| C
O --> |invalid input | Q{check if counter3 =1}
Q -->|counter3 =1 | q[increment counter3 by 1]
q -->  N
Q --> |counter3 =2| P
O -->|Choice 0| P([End])




