
# BMI Calculation Algorithm and Flowchart

## Algorithm

1. **Start**
2. **Enter** a continuous loop.
3. **Output explanation**: Display "This is a BMI test."
4. **Input height**: Prompt the user to input their height in meters:
   - If height is zero, display an error message and prompt for re-entry.
5. **Input height**: Prompt the user to input their weight in kilograms.
6. **Calculate BMI**: using the formula:  
   \( \text{BMI} = \frac{\text{weight}}{\text{height}^2} \).
7. **Output BMI**: Display the BMI value.
8. **Calculate BMI**: Determine BMI category:
   - If BMI > 25, display "You are overweight."
   - Else if BMI is between 18.5 and 25, display "You have a normal weight."
   - Otherwise, display "You are underweight."
9. **Choice to loop**: Ask the user if they want to calculate again (input 'y' for yes):
   - If 'y', repeat the loop.
   - Otherwise, exit the loop.
10. **End**

## Flowchart
```mermaid
---
config:
  layout: TD
  look: default
  theme: neutral
---
graph TD;
   A([ Start]) --> B[This is a BMI test];
    B --> C[/Input Your Height in m/];
    C --> D[/Input Your Weight in kg/];
    D --> E[BMI = weight / height*height];
    E --> F[/Display BMI/];
    F --> G{Determine BMI category};
    G --> H[/Overweight BMI<=18.5/];
    G --> I[/Underweight BMI > 25/];
    G --> K[/normal weight BMI>18.5 and BMI <= 25/]
    I --> Z{Do you want to continue?};
    H --> Z{Do you want to continue?};
    K --> Z{Do you want to continue?};
    Z --> |"y"|B;
    Z --> |"No"|J([Terminate]);
    
