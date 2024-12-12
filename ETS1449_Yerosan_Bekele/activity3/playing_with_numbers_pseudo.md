# problem analysis
+ **Input** - the number
+ **Output** - reverse of the number, amount of digits, product of even digits, first and last digits
first and last swapped, palindrome or not, frequency of digits, perfect or not, strong or not
+ **Operation** -
  - read input, num
  - reverse num
  - count amount of digits of num
  - calculate product of evens of num
  - record first and last digits of num
  - swap first and last digits
  - check if palindrome
  - count all the frequencies of digits of num
  - check if num is perfect
  - check if num is strong
  - display all the required outputs

# Algorithm design
## Pseudo code
+ step 1: start
+ step 2: read num, initialize temp = num, prod_even_digits to 1, swapped to 0, factorial, sum_of_factorials
+ step 3: initialize number_of_digits to 0, reverse to 0, last, first and first_last_sum, sum_of_divisors
+ step 4: make temp = temp / 10
+ step 5: add 1 to number_of_digits
+ step 6: if temp > 0, go to step 3 else continue
+ step 7: make temp = num
+ step 8: initialize counter with number_of_digits - 1
+ step 9: make rem = temp % 10
+ step 10: keep multiplying 10 with rem until i goes from 0 to counter, keep adding 1 to i
+ step 11: make reverse = reverse + rem
+ step 12: make counter = counter - 1
+ step 13: make temp = temp / 10
+ step 14: if temp > 0. go to step 9, else continue
+ step 15: make temp = num
+ step 16: make rem = temp % 10
+ step 17: if rem divided by 2 has remainder if 0, make prod_even_digits = prod_even_digits * rem
+ step 18: make temp = temp / 10
+ step 19: if temp > 0, go to step 16, else continue
+ step 20: make temp = num
+ step 21: make counter = number_of_digits
+ step 22: if counter equals number of digits, make last = temp % 10
+ step 23: if counter = 1, make first equal temp % 10
+ step 24: make counter = counter - 1
+ step 25: make temp = temp / 10
+ step 26: if temp > 0, go to step 22 else continue
+ step 27: make first_last_sum equal to the sum of first and last
+ step 28: initialize last1 to last, initial count
+ step 29: make counter number_of_digits again, make temp = num again
+ step 30: if counter equals number_of_digits, keep multiplying last1 with 10 until i goes from 0 to counter - 1, keep increasing i with i
+ - step 30.1: add last1 to swapped, make temp equal temp / 10
+ - step 30.2: decrease counter by 1
+ - step 30.3: make count = number_of_digits - counter
+ - step 30.4: go to 37
+ step 31: check if counter equals 1
+ - step 31.1: add first to swapped
  - step 31.2: go to step 38
+ step 32: make rem equal temp / 10
+ step 33: multiply rem with 10 until i goes from o to count, increase i with 1
+ step 34: make swapped increase by rem
+ step 35: make counter decrease by 1 and count increase by 1
+ step 36: make temp = temp / 10
+ step 37: if temp > 0 go to step 30, else continue
+ step 38: initialize is_palindrome
+ step 39: if reverse is equal to num, make is_palindrome = true else make palindrome = false
+ step 40: initialze show_frequency with false
+ step 41: if show_frequency is true:
+  - step 41.1: print Digit and then tab and Frequency
   - step 41.2: initialize digit with 0
   - step 41.3: make temp = num again and make count equal to 0
   - step 41.4: if temp % 10 equals digit, add 1 to count
   - step 41.5: make temp = temp / 10
   - step 41.6: if count greater than 0, then print digit then tab then count
   - step 41.7: add 1 to digit and check if it is less than or equal to 9
     - step 41.7.1: if yes, go to 41.3. else continue
   - step 41.8: make show_frequency equal false
   - step 41.9: go to 59
+ step 42: make factorial equal to 1
+ step 43: make temp = num and make rem = temp % 10
+ step 44: multiply factorial by i until i goes from 1 to equal to rem, increase i by 1
+ step 45: add factorial to sum_of_factorials
+ step 46: if temp > 0, go to step 42, else continue
+ step 47: if sum_of_factorials is equal to num, make is_strong equal to true else make it false
+ step 48: if num % i equals 0 for any i going from 1 upto equal to num / 2, add that i to sum_of_divisors
+ step 49: if sum_of_divisors equal num, make is_perfect true else just make is_perfect false
+ step 50: ask user to choose from a list of 0 - 9 for output, add the input to user_input
+ step 51: check the validity of the input and if wrong ask again
+ step 52: if user_input equals 1
+  - step 52.1: print the number of digits
+ step 53: if user input equals 2
+  - step 53.2: print reverse
+ step 54: if user input equals 3
+  - step 54.1: print prod_of_even
+ step 55: if user input equals 4
+  - step 55.1: print first, last, and their sum
+ step 56: if user input equals 5
+  -step 56.1: print swapped
+ step 57: if user input equals 6
+  - step 57.1: if is palindrome is true, print number is palindrome else number is not palindrome
+ step 58: if user input equals 7
+  - step 58.1: make show_frequency equal true
   - step 58.2: go to step 41
+ step 59: if user input equals 8
+   - step 59.1: if is_strong is true then print number is strong else number is not strong
+ step 60: if user input equals 9
    - step 60.1: if is_perfect is true then print number is perfect else number is not perfect
+ step 61: if user input is 0
    - step 61.1: go to step 2
+ step 62: ask use to continue
+ step 63: if user input is y then go to step 50 else continue
+ step 64: end
