# Problem Analysis
**Input** - number\
**Output** - \
    - create square pattern with numbers\
    - create square pattern with upper case alphabets\
    - create right-aligned right-angled triangle with numbers\
    - create left-aligned right-angled triangle with numbers\
    - create right-aligned right-angled triangle with alphabets\
    - create square pattern with lower case alphabets\
    - create hollow square\
    - create inverted half pyramid\
    - create hollow inverted half-pyramid\
    - create full pyramid\
    - create inverted full pyramid\
    - create hollow full pyramid\
**Operations** -\
    - read all inputs\
    - create square pattern with numbers\
    - create square pattern with upper case alphabets\
    - create right-aligned right-angled triangle with numbers\
    - create left-aligned right-angled triangle with numbers\
    - create right-aligned right-angled triangle with alphabets\
    - create square pattern with lower case alphabets\
    - create hollow square\
    - create inverted half pyramid\
    - create hollow inverted half-pyramid\
    - create full pyramid\
    - create inverted full pyramid\
    - create hollow full pyramid\
# Algorithm Design
## Pseudocode
+ Step 1: Start
+ Step 2: Read all the inputs
+ Step 3: Read the user's choice
+ Step 4: Perforn operation as,\
      4.1. If the user presses 1, create square pattern with numbers as,\
                4.1.1. using for loop initialize i to zero and the condition will be i<row \
                4.1.2. using another for loop initialize j to zero and its condition will be j<column\
                4.1.3. inside the j-loop print j+1\
                4.1.4. outside of the j-loop but inside i-loop print new line\
      4.2. If the user presses 2, create square pattern with upper case alphabets as,\
                4.2.1. using for loop initialize i to zero and the condition will be i<row\
                4.2.2. using another for loop initialize j to zero and its condition will be j<colum \
                4.2.3. inside the j-loop print alpha\
                4.2.4. increment alpha as alpha++\
                4.2.5. if alpha >'Z', stop the program\
                4.2.6. outside of the j-loop but inside the i-loop print new line\
      4.3. If the user presses 3, create right-aligned right-angled triangle with numbers as,\
                4.3.1. using for loop initialize i to zero and the condition will be i<num\
                4.3.2. using another for loop initialize j to zero and its condition will be j<i\
                4.3.3. inside the j-loop print j+1\
                4.3.4. outside of the j-loop but inside the i-loop print new line\
      4.4. If the user presses 4, create left-aligned right-angled triangle with numbers as,\
               4.4.1. initialize counter as counter=row-1\
               4.4.2. using for loop initialize i to one and the condition will be i<row\
               4.4.3. using another for loop initialize k to counter and its condition will be k>0\
               4.4.4. inside the k-loop print empty space \
               4.4.5. outside of k-loop using another for loop initialize j to i and its condition will be j>1\
               4.4.6. inside j-loop print j\
               4.4.7. outside of j-loop and k-loop but inside i-loop print new line\
     4.5. If the user presses 5, create right-aligned right-angled triangle with alphabet as,\
               4.5.1. using for loop initialize i to zero and the condition will be i<row\
               4.5.2. initilize alph as aplph='A'\
               4.5.3. using another for loop initialize j to 0 and its condition will be j<i\
               4.5.4. inside j-loop print alph and increment alph as alph++\
               4.5.5. if alph >'Z', stop the program\
               4.5.6. outside of the j-loop but inide i-loop, print new line\
     4.6.  If the user presses 6, create square pattern with lower case alphabets as,\
               4.6.1. using for loop initialize i to zero and the condition will be i<row\
               4.6.2. initialize alph as alph='a'\
               4.6.3. using another for loop initialize j to zero and the condition will be j<column\
               4.6.4. inside j-loop print alph and increment alph as alph++\
               4.6.5. if alph >'z', stop the program\
               4.6.6. outside of the j-loop but inide i-loop, print new line\
     4.7.  If the user presses 7, create hollow square as,\
              4.7.1. using for loop initialize i to one and the condition will be i<=row\
              4.7.2. using another for loop initialize j to one and the condition will be j<=column\
              4.7.3. if i==1 or i==row or j==1 or j==column, print star(*)\
              4.7.4. else print empty space\
              4.7.5. outside of j-loop but inside i-loop print new line\
     4.8. If the user presses 8, create inverted half pyramid as,\
              4.8.1. using for loop initialize i to zero and the condition will be i<row\
              4.8.2. using another for loop initialize j to row and the condition will be j>i\
              4.8.3. inside j-loop print star(*)\
              4.8.4. outside of j-loop but inside i-loop print new line\
     4.9. If the user presses 9, create hollow inverted half-pyramid as,\
              4.9.1. using for loop initialize i to row and the condition will be i>=1\
              4.9.2. using another for loop initialize j to one and the condition will be j<=i\
              4.9.3. if i==row or j==1 or j==i , print star(*)\
              4.9.4. else print empty space\
              4.9.5. outside of j-loop but inside i-loop print new line\
    4.10. If the user presses 10, create full pyramid as, \
              4.9.1. using for loop initialize i to one and the condition will be i<=row\
              4.9.2. using another for loop initialize j to one and the condition will be j<=row-i\
              4.9.3. inside the j-loop print empty space and close the loop\
              4.9.4. using another for loop initialize k to one and the condition will be k<=i*2-1\
              4.9.5. inside k-loop print star(*) and close the loop\
              4.9.6. inside i-loop print new line\
  4.11. If the user presses 10, create inverted full pyramid as, \
              4.9.1. using for loop initialize i to row and the condition will be i>=1\
              4.9.2. using another for loop initialize j to one and the condition will be j<=row-i\
              4.9.3. inside the j-loop print empty space and close the loop\
              4.9.4. using another for loop initialize k as k=i*2-1 and the condition will be k>=1\
              4.9.5. inside k-loop print star(*) and close the loop\
              4.9.6. inside i-loop print new line\
   4.12. If the user presses 10, create hollow full pyramid  as, \
              4.9.1. using for loop initialize i to one and the condition will be i<=row\
              4.9.2. using another for loop initialize j to one and the condition will be j<=row-i\
              4.9.3. using another for loop initialize k to one and the condition will be k<=i*2-1\
              4.9.4. if i==row or k==1 or k==i*2-1, print star(*)\
              4.9.5. else print empty space and close the loop\
              4.9.6. inside i-loop print new line\
  4.13. If the user presses 0, terminate the program
+ Step 5: stop 












    
