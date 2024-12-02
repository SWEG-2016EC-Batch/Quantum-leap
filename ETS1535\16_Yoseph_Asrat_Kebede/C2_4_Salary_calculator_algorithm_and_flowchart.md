
# Algorithm and Flowchart for Salary Calculation Program

## Algorithm

1. **Start**: Begin the program.
2. **Input user details**:
   - Ask the user to input their name, weekly working hours, bonus rate per hour, and base salary.
3. **Validate input**:
   - If the bonus rate is negative, prompt the user again until a valid value is entered.
4. **Calculate bonus payment**:
   - Subtract 48 (national workweek hours) from the weekly working hours to find overtime hours.
   - Multiply overtime hours by the bonus rate to calculate the bonus payment.
5. **Calculate gross salary**: Add the base salary and bonus payment.
6. **Calculate deductions**:
   - Calculate pension as 5% of the gross salary.
   - Calculate tax as 15% of the gross salary after pension.
7. **Calculate net salary**: Subtract deductions from the gross salary.
8. **Output results**:
   - Display the bonus payment, gross salary, and net salary to the user.
9. **End**: Terminate the program.

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
    A([Start]) --> B[/Input Name/];
    B --> M[/Weekly working hours/]; 
    M --> N[/Bonus rate per hour/];
    N --> O[/Base salary/];
    O --> C{If bonus rate < 0?};
    C --> |"Yes"|D[/Prompt user to enter a valid bonus rate/];
    D --> N;
    C --> |"No"|E[ bonus_payment = weekly_working_hours - 48 * base_salary/192 * bonus_rate_per_hour/100];
    E --> F[gross salary: Base salary + Bonus payment];
    F --> G[deductions: Pension = 0.05 * gross salary];
    G --> Z[Tax = 0.15 *
      gross salary-pension];
    Z --> H[net salary: Gross salary - Deductions];
    H --> K[/Bonus payment, Gross salary, Net salary/] ;
    K --> J([Terminate]);
