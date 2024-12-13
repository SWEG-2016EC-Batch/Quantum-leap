### Steps

1. **Start**
2. Display welcome message and menu of options to the user.
3. Prompt the user to enter a choice (`choice`) and a positive integer (`number`).
4. Initialize variables:
   - `product` = 1 (to store the product of even digits).
   - `sumFactorials` = 0 (to calculate the sum of digit factorials).
   - `digitCount` = 0 (to count digits).
5. Calculate the number of digits in `number`:
   - While `tempNum > 0`, divide `tempNum` by 10 and increment `digitCount`.
6. Store each digit of `number` in an array `digits[]`:
   - Loop through the digits in reverse order, storing each digit in `digits[]`.
7. **Perform action based on `choice`**:
   - **Case 'A': Reverse the digits**
     - Print the digits from the `digits[]` array in reverse order.
   - **Case 'B': Count digits**
     - Print `digitCount`.
   - **Case 'C': Product of even digits**
     - Loop through `digits[]`. If the digit is even, multiply it with `product`.
     - Print `product`.
   - **Case 'D': Sum of first and last digits**
     - Access the first and last elements of `digits[]`.
     - Print their sum.
   - **Case 'E': Swap first and last digits**
     - Swap the first and last elements of `digits[]`.
     - Print the modified number.
   - **Case 'G': Check if palindrome**
     - Compare the digits at symmetric positions in `digits[]`.
     - If all pairs match, print "Palindrome"; otherwise, print "Not a palindrome".
   - **Case 'H': Frequency of each digit**
     - Initialize an array `frequency[10]` with all zeros.
     - Loop through `digits[]` and increment the respective index in `frequency[]`.
     - Print the frequencies of each digit.
   - **Case 'I': Check for Strong number**
     - For each digit, compute its factorial and add it to `sumFactorials`.
     - If `sumFactorials` equals `number`, print "Strong number"; otherwise, print "Not a Strong number".
   - **Case 'J': Check for Perfect number**
     - Calculate the sum of proper divisors of `number`.
     - If the sum equals `number`, print "Perfect number"; otherwise, print "Not a Perfect number".
   - **Default case**: Print "Invalid option."
8. **End**
