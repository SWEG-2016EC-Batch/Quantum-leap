
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

graph TD
```mermaid
    A[Start] --> B[Display "This is a BMI test"]
    B --> C[Input height in meters]
    C --> D{Is height = 0?}
    D -- Yes --> E[Display "Invalid input. Enter correct height"] --> C
    D -- No --> F[Input weight in kilograms]
    F --> G[Calculate BMI]
    G --> H[Display BMI value]
    H --> I{Is BMI > 25?}
    I -- Yes --> J[Display "You are overweight"]
    I -- No --> K{Is BMI between 18.5 and 25?}
    K -- Yes --> L[Display "You have a normal weight"]
    K -- No --> M[Display "You are underweight"]
    J --> N[Ask user: "Calculate again?"]
    L --> N
    M --> N
    N -- Yes --> C
    N -- No --> O[End]
```

