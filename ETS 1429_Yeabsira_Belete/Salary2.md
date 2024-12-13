# Net Salary Calculator
## Pseudo-code

1. start

2. Declare variables:
        
        base_salary, worked_hours, bonus_rate, bonus_pay, gross_salary, pension,
        tax_rate, tax, net_pay (all as float).

3. Enter

        base_salary and worked_hours.

    If worked hour greater than 40, enter

       bonus_rate.

4. Calculate 

        bonus_pay = (worked_hours - 40) * bonus_rate * (base_salary / 240).
        gross_salary = base_salary + bonus_pay.
        pension = base_salary * 0.07.
    IF base_salary >= 3500 THEN

        SET tax_rate = 0.3
        CALCULATE tax = gross_salary * tax_rate

    ELSE IF base_salary >= 2000 THEN

        SET tax_rate = 0.25
        CALCULATE tax = gross_salary * tax_rate

    ELSE IF base_salary >= 1200 THEN

        SET tax_rate = 0.2
        CALCULATE tax = gross_salary * tax_rate

    ELSE IF base_salary >= 600 THEN

        SET tax_rate = 0.15
        CALCULATE tax = gross_salary * tax_rate

    ELSE IF base_salary > 200 THEN

        SET tax_rate = 0.1
        CALCULATE tax = gross_salary * tax_rate

    ELSE IF base_salary <= 200 THEN

        SET tax_rate = 0.0
        SET tax = 0
   
5. Calculate 
   
        net_pay = gross_salary - pension - tax
    THEN Print
    
        Your net payment
6. End
