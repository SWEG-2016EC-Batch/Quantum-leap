# problem analysis
Problem Analysis
- **Input**: capacityOfGallons,milePerGallon,choice
-**Output**:mileCanDriven
-we first declare  a float variable capacityOfGallons,milePerGallon,mileCanDriven and a counter variable counter1,counter2,counter3,counter4,and initialize all counters to 0.\
-The program uses a while loop to continuously prompt the user for input until a valid input is provided or the user decides to exit.\
-Read user inputs capacityOfGallons,milePerGallon and choice.\
-The program ensures input validation by:\
Checking if the input values for capacityOfGallons and milePerGallon are positive numbers.\
-we Limit the number of invalid attempts to three using counters untill they become 3.

-The calculated miles are displayed with two decimal precision.
calculated distance. if mileCanDriven > or<2:\
-then The program distinguishes between "mile" and "miles"  \
              - Read choice\
              - check if choice is 1 or 0 or invalid input\
                if 1 then read capacityOfGallons
              else if invalid check if counter =1 or counter =2 read choice again else end the program.

# pseudo code
- **step 1**:start
- **step 2**: check the while loop if:\

   2.1 true then go to step 3\
   2.2 false then go to step 14
- **step 3**:Read capacityOfGallons
- **step 4**:Increment counter1 by 1
- **step 5**: check if capacityOfGallons is greaterthan 0  \
           5.1 then go to step 6\
           5.2 else if counter1 =1 or counter1 =2 go to step 3
           5.3 else goto 14
- **step 6**:Read milePerGallon
- **step 7**:Increment counter1 by 1
- **step 8**: check if milePerGallon is  a number\
           8.1 then go to step 9\
           8.2 else if counter2 =1 or counter2 =2 go to step 6
           8.3 else goto 14
- **step 9**:calculate mileCanDriven as
```  mileCanDriven=capacityOfGallons*milePerGallon ```
- **step 10**:check if mileCanDriven >2
          10.1 then display mileCanDriven
          10.2 goto step 11
- **step 11**: check if mileCanDriven >2
            11.1 then display mileCanDriven
- **step 12**: Read choice

- **step 13**: check if choice is 1 or 0 or invalid input\
             15.1 if 1 then go to step 3\
             15.2 else if 0 go to end
             15.3 else if counter3 =1  go to step 14\
             15.4 goto step 14
- **step 14** End
# Flowchart
```mermaid
graph TD;
A([start])--> B{check while}
B --> |true| C[/Read capacityOfGallons/]
C --> D{check capacityOfGallons is greaterthan  0}
D --> |No| g[Increment counter1 by 1]
g -->G{check if counter1 =1}
G --> |counter1 = 1| C
G --> |counter1 = 2| P
D --> |yes| E[/Read milePerGallon/]
E -->H{check if milePerGallon is greaterthan 0}
H -->|No| I[Increment counter2 by 1]
I --> J{check if counter2 =1}
J --> |counter2 = 1| E
J --> |counter2 = 2| P
H --> |yes| k[calculate mileCanDriven]
k --> L{check if check if mileCanDriven >=2}
L --> |False| S{check if mileCanDriven <2 }
L --> |True| M[/display mileCanDriven for plural/]
S -->|True| s[/Display mileCanDriven for singular/]
s-->N
M-->N[/Read choice/]
N -->O{check if choice == 1 or 0 or invalid input}
O-->|choice = 1| C
O --> |invalid input | Q{check if counter3 =1}
Q -->|counter3 =1 | q[increment counter3 by 1]
q -->  N
Q --> |counter3 =2| P
O -->|Choice 0| P([End])

