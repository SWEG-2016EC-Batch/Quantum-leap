# Problem Analysis
+ **Input** - capacity of fuel tank, miles per gallon
+ **Output** - total  miles
+ **Operation** -\
               - read the inputs\
               - calculate total miles\
               - display total miles
# Algorithm Design 
## Pseudocode 
+ *step 1:* start
+ *step 2:* read the inputs, capacity and miles per gallon\
         2.1. if capacity<=0 or miles per gallon<=0, go to step 2\
         2.2. if capacity>0 or miles per gallo >0, go to step 3
+ *step 3:* calculate total miles as,
   ```
    total miles = capacity * miles_per_gallon
   ```
+ *step 4:* display total miles
+ *step 5*: ask the user if they want to calculate again
         5.1. if the answer is yes, go to step 2\
         5.2. if the answer is no, go to step 5
+ *step 5:* stop
  ## Flowchart
  
  ```mermaid
  graph TD;

   A([Start]) --> B[/Read: capacity and miles_per_gallon/];
   B --> C{ capacity<=0 or miles_per_gallon<0};
   C --> |True| B[/Read: capacity and miles_per_gallon/];
   C --> |False| D[total_miles&equals;capacity * miles_per_gallon];
   D --> E[print: total_miles];
   E --> F{ the user wants to calculate again};
   F --> |True| B[/Read: capacity and miles_per_gallon/];
   F --> |False| G([End]);
    

        
