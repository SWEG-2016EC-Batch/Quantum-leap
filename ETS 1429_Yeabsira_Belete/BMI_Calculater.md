# BMI_Calculater algorithm
---
[linkhere](https://github.com/SWEG-2016EC-Batch/Quantum-leap/tree/main/ETS%201429_Yeabsira_Belete)
 
 ## Input 

1. Weight in kilogram and Height in meter.

2. Inter '1' to continue or '0' to terminate

 ## Output

 1. Our Body Mass Index(BMI).

 2. If BMI < 18.5 and > 24.9 give suggesion for the user

 ## Operation

 1. start.

 2. Declare variables for weight (float), height (float), BMI (yourBodyMassIndex), and suggested weight (suggestedWeight).

 3. Declare integer variables counter, temp, var for input attempts and num for controlling the loop.

 4. Start a do-while loop that will continue as long as num equals 1.

 5. Display a prompt asking the user for their weight in kilograms.

 6. If the input is invalid (non-numeric or negative), clear the input, increment the counter, and retry. Allow up to 3 attempts.

 7. If validation fails after 3 attempts, display an error message and exit the loop.

8. Display a prompt asking the user for their height in meters.
Validate the height similarly to weight, allowing up to 3 attempts.

 9. If validation fails after 3 attempts, display an error message and exit the loop.

 10. calculate BMI using the formula, BMI = weight / height * height.
 
 11. Format the BMI value to 2 decimal places for display.

 12. analyze BMI: underweight < 18.5; calculate suggestedweight = 18.5 * height *height then calculate weight needed = suggestedWeight−weight. 

 13. Display the BMI and weight gain suggestion.

 14. analyze BMI: overweight > 24.9; calculate suggestedweight = 24.9 × height * height then calculate WeightNeeded = weight−suggestedWeight.

 15. Display the BMI and weight loss suggestion.

 16. continue or exit: Prompt the user to enter 1 to continue or 0 to terminate the program.

 17. Validate the input, allowing up to 3 attempts. If validation fails, display an error and exit the program.

 18. If the user enters 1, repeat the process from Step 5.
 
 19. If the user enters 0, exit the loop and terminate the program.
 
 20. stop the program
  

# BMI_Calculater pseudo code

 1. start

 2. Declare variables for weight (float), height (float), BMI (yourBodyMassIndex), and suggested weight (suggestedWeight).

 3. Declare integer variables counter, temp, var for input attempts and num for controlling the loop.

 4. Start a do-while loop that will continue as long as num equals 1.

 5. Inter weight in kilogram 
  
 6. if cin.fail or less than 0 then give the chance restriction(counter) from 1 to 3. 
   
 7. when counter == 3 exit the loop.

 8.  Inter height in meter 
  
 9. if cin.fail or less than 0 then give the chance restriction(temp) from 1 to 3.
    
 10. when temp == 3 exit the loop.

 11. **Calculate BMI**

**BMI** =  weight / height * height.

 12. Format the BMI value to 2 decimal places for display using (#include (iomanip))
   
    then insert, 
    
      cout << fixed << setprecision(2);

 13. if BMI < 18.5
   
**calculate suggestedweight** = 18.5 * height *height and
   
**weight needed** = suggestedWeight−weight.

 14. then Display the BMI and weight gain suggestion.
   
 15. if BMI > 24.9
   
**calculate suggestedweight** = 24.9 × height * height

**WeightNeeded** = weight−suggestedWeight.

 16. Display the BMI and weight loss suggestion.
   
 17. **continue or exit:** Prompt the user to enter 1 to continue or 0 to terminate the program.
   
 18. if cin.fail or different from '1' and '0' give a chance "var" up to 3 from 1.

 19. If the user enters 1, repeat the process from Step 5.

 20. If the user enters 0, exit the loop and terminate the program.

21. stop the program.
