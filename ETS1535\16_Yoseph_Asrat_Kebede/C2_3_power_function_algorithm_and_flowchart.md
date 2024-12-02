
# Algorithm and Flowchart for Power Function Program

## Algorithm

1. **Start**: Begin the program.
2. **Input base and exponent**: Ask the user to input two integers, base \(X\) and exponent \(Y\).
3. **Check special cases**:
   - If \(X = 0\) and \(Y = 0\), display "undefined" and terminate the program.
   - If \(Y = 0\), the result is 1 (any number to the power of 0 is 1) and terminate the program.
4. **Calculate power**:
   - If \(Y > 0\): Multiply \(X\) by itself \(Y\) times.
   - If \(Y < 0\): Divide 1 by \(X\), \(|Y|\) times.
5. **Output result**: Display the result of \(X^Y\).
6. **End**: Terminate the program.

---

## Flowchart
```mermaid
---
config:
  layout: TD
  look: default
  theme: neutral
---
graph TD;
   A([ Start]) --> C[/Input the base/];
    C --> D[/Input the exponenet/];
    D --> E{If x=0 and y=0};
    E --> |"Yes"|F[/Display Result is undefined/];
    E --> |"No"|G{If exponent=0};
    G --> |"Yes"|H[/x raised to y is 1/];
    G --> |"No"|I{exponent<0};
    I --> |"Yes"|X{if i>exponent};
    X --> |"Yes"|Y[power= power/base
    i= i+1];
    Y --> X;
    I --> |"No"|J{if i < exponenet};
    X --> |"No"|Z[/Dispaly power/];
    J --> K{if i < exponenet};
    K --> |"Yes"|L[power = power*base
    i= i+1];
    L --> K;
    K --> |"No"|N[/Display power/];
    N --> M([Terminate]);
    H --> M([Terminate]);
    Z --> M([Terminate]);
    F --> M([Terminate]);

```
