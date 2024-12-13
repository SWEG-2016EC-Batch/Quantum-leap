# Pseudo code 
- **step 1**: start
- **step 2**: check the while loop if:\
   2.1 true then go to step 3\
   2.2 false then go to step 22
- **Step 3**: Declare and initialize variables:

    -reverseTheNumber = 0
    
    -numForReverse, tempForReverse, remainderforReverse
    
    -digitsCounter = 0
    
    -remainderForDigits, numForDigits, tempForDigits
    
    -productOfEvenDigits = 1
    
    -numForProductOfEvenDigits, tempForProductOfEvenDigits,     -remainderForProductOfEvenDigits
    
    -evenDigit, evenCounter = 0

- **Step 4**: Read userChoice

- **Step 5**: Check if userChoice is a number value (0-9):
    5.1: If true, go to step 6   
    5.2: If false, print "INVALID INPUT! PLEASE TRY AGAIN!" and go to step 3
- **Step 6**: Execute based on userChoice:
        6.1if userChoice =  0:
        display a message and exit the program.

- 6.2 if userChoice =  1: Reverse of a number

-6.2.1 Read numForReverse

- 6.2.2 If numForReverse is invalid or less than 0 then Clear input and go to step 3

6.2.3calculate tempForReverse as
 ``` 
tempForReverse = numForReverse
```

- 6.2.4 While numForReverse is greaterthan  0: calculate remainderforReverse as
```
remainderforReverse = numForReverse % 10
```
6.2.5calculate the following 
```
reverseTheNumber = reverseTheNumber * 10 + remainderforReverse
```
6.2.6 calculate the following numForReverse = numForReverse / 10
```
```
6.2.7 Print the entered number and its reverse

- 6.3 if userChoice =  2:
- Read numForDigits

-6.3.1 If numForDigits is invalid or less than 0:

6.3.2 Clear input and go to step 3

6.3.3 calculate the following as ```tempForDigits = numForDigits````

6.3.4 While numForDigits >greaterthan 0:

- 6.3.5 Increment digitsCounter

- 6.3.6 calculate the following ``` remainderForDigits = numForDigits % 10```

6.3.7 calculate the following ```numForDigits = numForDigits / 10```

6.3.8 Print the entered number and its digit count

- 6.4 if userChoice =  3: Product of even digits

- 6.4.1 Read numForProductOfEvenDigits

- 6.4.2 If numForProductOfEvenDigits is invalid or less than 0:

6.4.3 Clear input and go to step 3

6.4.4 calculate the following as``` tempForProductOfEvenDigits = numForProductOfEvenDigits```

6.4.5 While numForProductOfEvenDigits is greaterthan  0:

6.4.6 calculate the following ``` remainderForProductOfEvenDigits = numForProductOfEvenDigits % 10 ```
- 6.5 If remainderForProductOfEvenDigits % 2 == 0:

- 6.5.1 Increment evenCounter

6.5.2 calculate the following to extract the even digit  as ```evenDigit = remainderForProductOfEvenDigits```

6.5.3 calculate the following to find the products ``` productOfEvenDigits *= remainderForProductOfEvenDigits```

6.5.4 calculate the following to ruleout the last digit ``` numForProductOfEvenDigits = numForProductOfEvenDigits / 10```

- 6.6  If evenCounter is greaterthan 1:

6.6.1 Print the product of even digits

6.6.2 Else if evenCounter == 0:

6.6.3 Print "There is no even digit present in your entered number!"

6.6.4 Else:

6.6.5 Print "NO PRODUCT! There is only one even digit present with the digit being", evenDigit

- 6.7 if userChoice =  4: First and last digits

- 6.7.1  Read num

- 6.7.2 If num is invalid or less than 0:

6.7.3 Clear input and go to step 3

- 6.7.4 calculate the following to extract the last digit as ```lastDigit = num % 10```

- 6.7.5 calculate the following ``` firstDigit = num```

6.7.6 While firstDigit greaterthan or equalto 10:

- 6.7.7 calculate the following firstDigit /= 10

- 6.7.8 calculate the following to find their sum sum = firstDigit + lastDigit

6.7.9 Print the first digit, last digit, and their sum

- 6.8 if userChoice =  5
- 6.8.1 Read num

- 6.8.2 If num is invalid or less than 0:

6.8.3 Clear input and go to step 3

- 6.8.4 calculate the following temp = num

- 6.8.5 calculate the following ```lastDigit = num % 10```

6.8.6 While temp >= 10:

- 6.8.7 calculate the following to eextract the last digit firstDigit = temp % 10

6.8.8 calculate the following continue dividing by temp /= 10
6.8.9 extract the middlt digit  as ```middleDigits = (tempSwapNum % (int)pow(10, digitsCounter - 1)) / 10```
  
6.9.1.0calculate the following swappedNumber as                                 ```swappedNumber = lastDigit * pow(10, digitsCounter - 1) + middleDigits * 10 + firstDigit```
-6.9 if userChoice =  6: Palindrome check
- 6.9.1 Read num

- 6.9.2 If num is invalid or less than 0:

6.9.3 Clear input and go to step 3

6.9.3 initialize reverse  to 0

6.9.4 While temp is greaterthan 0:

6.9.5 calculate the following remainder as ```remainder = temp % 10```

6.9.6 calculate the following ```reverse = reverse * 10 + remainder```

6.9.7 calculate the following ```temp /= 10```

- 6.9.8 If reverse == num:

6.9.9 Print num, "is a palindrome."

6.9.1.0 Else:

6.9.1.1Print num, "is not a palindrome."
- 6.9.1.2if userChoice =  7

- 6.9.1.3 Read num

- 6.9.1.4 If num is invalid or less than 0:

6.9.1.5 Clear input and go to step 3

6.9.1.6 While num greaterthan 0:

6.9.1.7 calculate the following last digit as ``` digit = num % 10```

6.9.1.8 Increment frequency digit counter for the respective digit through 1 to 9.

6.9.1.9 calculate the following num /= 10
display the frequency of digit

-6.9.2.0  if userChoice =  8

6.9.2.1 Print "Enter the number to check if it is a strong number: enter non-number character to go back to menu"

6.9.2.2 Read num

6.9.2.3 If num is invalid or less than 0:

6.9.2.4 Clear input and go to step 3

6.9.2.5 calculate the following temp = num

6.9.2.6 calculate the following sum = 0

6.9.2.7 While temp > 0:

6.9.2.8 calculate the following remainder = temp % 10

6.9.2.9 calculate the following factorial = 1

6.9.3.0 For each i from 1 to remainder:

6.9.3.1 calculate the following factorial *= i

6.9.3.2 calculate the following sum += factorial

6.9.3.3 calculate the following temp /= 10

6.9.3.4 If sum == num:

6.9.3.5 Print num, "is a strong number."

6.9.3.6 Else:

6.9.3.7 Print num, "is not a strong number."

6.9.3.8 Sleep for 3 seconds and go to step 3

6.9.3.9 if userChoice =  9: Perfect number check

6.9.4.0 Print "Enter the number to check if it is a perfect number: enter non-number character to go back to menu"

6.9.4.1 Read num

6.9.4.2 If num is invalid or less than 0:

6.9.4.3 Clear input and go to step 3

6.9.4.4 calculate the following sum = 0

6.9.4.5 For each i from 1 to num / 2:

6.9.4.6 If num % i == 0:

6.9.4.7 calculate the following sum += i

6.9.4.8 If sum == num:

6.9.4.9 Print num, "is a perfect number."

6.9.5.0 Else:

6.9.5.1 Print num, "is not a perfect number."
Step 7: End