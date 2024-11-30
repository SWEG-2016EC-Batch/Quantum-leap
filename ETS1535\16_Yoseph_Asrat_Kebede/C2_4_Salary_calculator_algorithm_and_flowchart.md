
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
   - Calculate pension as 5% of the base salary.
   - Calculate tax as 15% of the base salary.
7. **Calculate net salary**: Subtract deductions from the gross salary.
8. **Output results**:
   - Display the bonus payment, gross salary, and net salary to the user.
9. **End**: Terminate the program.

---

## Flowchart

```plaintext
        +-------------------------------+
        | Start                        |
        +-------------------------------+
                  |
                  v
        +-------------------------------+
        | Input name, hours, bonus rate,|
        | and base salary               |
        +-------------------------------+
                  |
                  v
        +-------------------------------+
        | Validate bonus rate:          |
        | If invalid, prompt again      |
        +-------------------------------+
                  |
                  v
        +-------------------------------+
        | Calculate bonus payment =     |
        | overtime hours * rate         |
        +-------------------------------+
                  |
                  v
        +-------------------------------+
        | Calculate gross salary =      |
        | base salary + bonus           |
        +-------------------------------+
                  |
                  v
        +-------------------------------+
        | Calculate deductions:         |
        | Pension = 5% base, Tax = 15%  |
        +-------------------------------+
                  |
                  v
        +-------------------------------+
        | Calculate net salary =        |
        | gross salary - deductions     |
        +-------------------------------+
                  |
                  v
        +-------------------------------+
        | Output bonus, gross, net      |
        +-------------------------------+
                  |
                  v
        +-------------------------------+
        | End                          |
        +-------------------------------+
```
