# Problem Analysis
**Input** - number\
**Output** - \
    - reverse of the number\
    - the number of the digits\
    - product of even digits\
    - sum of first and last digits\
    - swapped number\
    - palindrom or not\
    - frequency of the digits\
    - strong or not\
    - perfect or not\
**Operations** -\
    - read all inputs\
    - calculate the reverse of the number\
    - count the digits of the number\
    - calculate the sum of the first and last digits\
    - swap the first and last digits\
    - check if the number is palindrome or not\
    - find the frequency of the digits of the number\
    - check if the number is strong or not\
    - check if the number is perfect of not\
# Algorithm Design
## Pseudocode
+ Step 1: Start
+ Step 2: Read all the inputs
+ Step 3: Read the user's choice
+ Step 4: Perforn operation as,\
      4.1. If the user presses 1, find the reverse of the number as,\
                - 4.1.1. find the reminder as reminder=num%10\
                - 4.1.2. print the reminder\
                - 4.1.3. decrement num as num/10\
                - 4.1.4. if num >0, go to step 4.1.2\
      4.2. If the user presses 2, count the number of the digits as,\
                - 4.2.1. store the number on the temp variable as, temp=num\
                - 4.2.2. decrement num as num/=10\
                - 4.2.3. increment counter as counter++\
                - 4.2.4. if num >0, go to step 4.2.2\
      4.3. If the user presses 3, calculate the product of even digits as,\
                - 4.3.1. store the num on the temp variable as temp=num\
                - 4.3.2. calculate the reminder as reminder= num%10\
                - 4.3.3. if reminder%2 ==0, find product as product*=reminder\
                - 4.3.4. decrement num as num/=10\
                - 4.3.5. if num >0, go to step 4.3.2\
      4.4. If the user presses 4, find the sum of the first and last digits as,\
               - 4.4.1. store the num on the temp variable as temp=num\
               - 4.4.2. find reminder as reminder=num%10\
               - 4.4.3. increment counter as counter++\
               - 4.4.4. if num/10==0, print reminder as first digit\
               - 4.4.5. if counter==1, print reminder as last digit\
               - 4.4.6. if num/10==0 or counter==1, calculate sum as sum+=reminder\
               - 4.4.7. decrement num as num/=10\
               - 4.4.8. if num>0, go to step 4.4.2\
               - 4.4.9. if num<=0, print sum\
     4.5. If the user presses 5, swap the first and last digits as,\
               - 4.5.1. calculate last digit as, last_digit= num%10\
               - 4.5.2. store the number on the temp variable as temp=num\
               - 4.5.3. decrement temp as temp/=10\
               - 4.5.4. calculate divisor as divisor*=10\
               - 4.5.5. if temp>=10, go to step 4.5.2\
               - 4.5.6. calculate the first digit as, first_digit=temp\
               - 4.5.7. calculate swapped number as, swapped_num= lasr_digit*divisor + (num%divisor)/10 * 10 + first_digit\
               - 4.5.8. print swapped_num\
     4.6.  If the user presses 6, check if the number is palindrome or not as,\
               - 4.6.1. store the number on the temp variable as, temp=num\
               - 4.6.2. calculate digit as digit=num%10\
               - 4.6.3. calculate counter as counter= ((counter*10) + digit)\
               - 4.6.4. decrement num as num/=10\
               - 4.6.5. if num!=0, go to step 4.6.2\
               - 4.6.6. if counter==temp, print the number as "palindrome"\
               - 4.6.7. if counter!=temp, print the number as "Not palindrome"\
     4.7.  If the user presses 7, find the frequency of the digits as,\
              - 4.7.1. calculate digit as, digit=num%10\
              - 4.7.2. increment frequency as frequency[digit]++\
              - 4.7.3. decrement num as num/=10\
              - 4.7.4. if num >0, go to step 4.7.1\
              - 4.7.5. if num <=0, print frequency\
     4.8. If the user presses 8, check if the number is strong or not as,\
              - 4.8.1. store the number on the temp variable as, temp=num\
              - 4.8.2. initialize factorial to 1 as factorial=1\
              - 4.8.3. calculate reminder as reminder=num%10\
              - 4.8.4. initial i as i=1\
              - 4.8.5. calculate factorial as factorial*=1\
              - 4.8.6. increment i as i++, if i<=reminder go to step 4.8.5\
              - 4.8.7. calculate sum as, sum+=factorial\
              - 4.8.8. decrement num as num/=10\
              - 4.8.9. if num >0, go to step 4.8.2\
              - 4.8.10. if sum==temp, print the number as "Strong"\
              - 4.8.11. if sum!=temp, print the number as "Not strong"\
     4.9. If the user presses 9, check if the number is perfect or not as,\
              - 4.9.1. calculate divisor as, divisor=num%10\
              - 4.9.2. if divisor==0, calculate sum as sum+=count\
              - 4.9.3. increment count as, count++\
              - 4.9.4. if count <=num, go to step 4.9.1\
              - 4.9.5. calculate difference as difference=sum-num\
              - 4.9.6. if difference==num, print the number as "Perfect"\
              - 4.9.7. if difference!=num, print the number as "Not perfect"\
    4.10. If the user presses 0, terminate the program\
+ Step 5: stop 
           
     















