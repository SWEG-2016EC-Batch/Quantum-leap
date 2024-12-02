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
+ *step 2*: read num1 and num2\
        2.1. if the input values are not valid, go to step 2\
        2.2. if num1=0 and num2=0, print: ERROR\
        2.3. if num1=0 and num2<0, print: ERROR\
        2.4. if the input values are valid and num1!=0 0r num2>0, go to step 4
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
    B --> C{input values are valid};
    C --> |False| B[/Read: num1, num2/];
    C --> |True| D{num1=0 and num2=0};
    D --> |True| E[/print: ERROR/];
    D --> |False| F{ num1=0 and num2<0};
    F --> |True| G[/print: ERROR/];
    F --> |False| H[result=pow#40;num1,num2#41;];
    H --> I[/Print: result/];
    I --> J([End]);
