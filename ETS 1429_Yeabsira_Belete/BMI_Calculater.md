start.
Declare variables for weight (float), height (float), BMI (yourBodyMassIndex), and suggested weight (suggestedWeight).
Declare integer variables counter, temp, var for input attempts and num for controlling the loop.
Start a do-while loop that will continue as long as num equals 1.
Display a prompt asking the user for their weight in kilograms.
If the input is invalid (non-numeric or negative), clear the input, increment the counter, and retry. Allow up to 3 attempts.
If validation fails after 3 attempts, display an error message and exit the loop.
Display a prompt asking the user for their height in meters.
Validate the height similarly to weight, allowing up to 3 attempts.
If validation fails after 3 attempts, display an error message and exit the loop.
calculate BMI using the formula, BMI = weight / height * height. 
Format the BMI value to 2 decimal places for display.
analyze BMI: underweight < 18.5; calculate suggestedweight = 18.5 * height *height then calculate weight needed = suggestedWeight−weight. 
Display the BMI and weight gain suggestion.
overweight > 24.9; calculate suggestedweight = 24.9 × height * height then calculate WeightNeeded = weight−suggestedWeight.
Display the BMI and weight loss suggestion.
continue or exit: Prompt the user to enter 1 to continue or 0 to terminate the program.
Validate the input, allowing up to 3 attempts. If validation fails, display an error and exit the program.
If the user enters 1, repeat the process from Step 5.
If the user enters 0, exit the loop and terminate the program.
stop the program.
