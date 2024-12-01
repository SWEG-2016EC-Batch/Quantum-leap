# Problem Analysis
+ **Input** - num1 and num2
+ **Output** - result(num1^num2)
+ **Operation** -\
          - read the inputs, num1 and num2\
          - calculate the result\
          - display the result
# Algorithm Design
  ## Pseudocode
+ *step 1*: start
+ *step 2*: read num1 and num2
+ *step 3*: calculate the result as
   ```
   result= pow(num1,num2)
   ```
+ *step 4*: print result
+ *step 5*: stop
## Flowchart
```mermaid
graph TD;
    A([start]) --> B[/Read: num1, num2/];
    B -->C[result=pow&#40num1,num2&#41];
    C --> D[/Print: result/];
    D --> E([End])
