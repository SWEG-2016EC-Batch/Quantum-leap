
# Algorithm and Flowchart for Mileage Calculation Program

## Algorithm

1. **Start**: Begin the program.
2. **Input gallons left**: Ask the user to input the number of gallons of gas left in their tank.
3. **Input miles per gallon (MPG)**: Ask the user to input the miles their automobile can travel per gallon of gas.
4. **Calculate total miles**: Multiply the number of gallons by MPG to find the total miles the automobile can travel without refueling.
5. **Output result**: Display the total miles to the user.
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
   A([ Start]) --> C[/Input gallons left/];
    C --> D[/Input miles per gallon/];
    D --> E[miles_left = MPG * gallons_left;];
    E --> F[/Display miles left/];
    F -->J([Terminate]);
