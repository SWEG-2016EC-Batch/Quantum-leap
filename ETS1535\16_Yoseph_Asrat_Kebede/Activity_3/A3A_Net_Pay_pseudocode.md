
# Pseudocode for Net Salary Calculator

## Assumptions
- National work week: 40 hours. Overtime is considered for hours above 40.

## Variables
- `weekly_working_hours`: Number of hours worked in a week (input).
- `bonus_rate_per_hour`: Bonus rate as a percentage of profit (input).
- `base_salary`: Base salary (input).
- `gross_salary`: Total salary including base and overtime.
- `net_salary`: Final salary after deductions.
- `bonus_payment`: Payment calculated from the bonus rate.
- `pension`: Pension contribution (fixed percentage).
- `tax`: Tax amount based on the salary range.
- `taxRate`: Tax rate determined by the base salary.

## Steps
1. Display program description.
2. Prompt the user to input:
    - Weekly working hours.
    - Bonus rate per hour (validate for non-negative values).
    - Base salary.

3. Determine tax rate based on `base_salary`:
    - If `base_salary` ≤ 200, `taxRate` = 0.
    - If `200 < base_salary ≤ 600`, `taxRate` = 0.1.
    - If `600 < base_salary ≤ 1200`, `taxRate` = 0.15.
    - If `base_salary > 1200`, `taxRate` = 0.2.

4. Calculate `bonus_payment` based on:
    - Overtime hours = `weekly_working_hours` - 40 (if > 0).
    - `bonus_payment` = `overtime hours` × `bonus_rate_per_hour` × `base_salary` ÷ 100.

5. Compute `gross_salary`:
    - `gross_salary` = `base_salary` + `bonus_payment`.

6. Calculate deductions:
    - `tax` = `taxRate` × `gross_salary`.
    - `pension` = 0.07 × `gross_salary`.

7. Compute `net_salary`:
    - `net_salary` = `gross_salary` - (`tax` + `pension`).

8. Display the calculated values for:
    - Gross salary.
    - Bonus payment.
    - Tax amount.
    - Pension amount.
    - Net salary.

## Validation
- Ensure bonus rate and base salary inputs are valid (non-negative).
- Loop for invalid inputs until corrected.

## End
