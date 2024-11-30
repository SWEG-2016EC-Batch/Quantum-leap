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
+ *step 2:* read the inputs, capacity and miles per gallon
+ *step 3:* calculate total miles as,
   ```
    total miles = capacity * miles_per_gallon
   ```
+ *step 4:* display total miles
+ *step 5:* stop
  ## Flowchart
  
  ```mermaid
  graph TD;

    A([Start]) --> B[/Read: capacity and miles_per_gallon/];
    B --> C[total_miles = capacity &times miles_per_gallon];
    C --> D[print: totl_miles];
    D --> E([End]);
    

        
