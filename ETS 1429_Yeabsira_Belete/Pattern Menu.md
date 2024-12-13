# Playing with pattern
## 1, Numbers in Rectangular Form (1 to 5, 5x)
### pseudo code
1. Print message: "You need to see numbers in rectangular form from 1 to 5 (5x)."

2. Loop from i = 1 to i <= 5:

   Loop from j = 1 to j <= 5:

       Print the value of j.
    Print a new line.

3. End
## 2, Alphabets in Rectangular Form (A to X)
### pseudo code
1. Print message: "You need to see alphabets in rectangular form from A to X."
   
2. Set alph = 'A'.
   
3. Loop from i = 1 to i <= 4:

    Loop from j = 1 to j <= 6:
    
      Print the current value of alph.
    
       Increment alph.
    
    Print a new line.

4. End
## 3, Numbers in Right-Angle Form (Left to Right)
### pseudo code
1. Print message: "You need to see numbers in right-angle form left to right."
   
2. Loop from i = 1 to i <= 5:
   
   Loop from j = 1 to j <= i:
       
       Print the value of j.
   
   Print a new line.
3. End
## 4, Numbers in Right-Angle Form (Right to Left)
### pseudo code
1. Print message: "You need to see numbers in right-angle form right to left."
   
2. Loop from i = 1 to i <= 5:

   Loop from j = 1 to j <= 5 - i:

      Print a space.

    Loop from k = i to k >= 1:

       Print the value of k.

    Print a new line.
3. End
## 5, Alphabets in Right-Angle Form (A to E)
### pseudo code
1. Print message: "You need to see alphabets in right-angle form from A to E."
   
2. Loop from i = 1 to i <= 5:
     
     Set alph = 'A'.

   Loop from j = 1 to j <= i:
 
       Print the current value of alph.

    Increment alph.

   Print a new line.
3. End
## 6, Alphabets in Repetitive Rectangular Form (a to e)
### pseudo code
1. Print message: "You need to see alphabets in repetitive rectangular form from a to e."
   
2. Loop from i = 1 to i <= 5:
    
    Set alph = 'a'.
   
   Loop from j = 1 to j <= 5:

       Print the current value of alph.

    Increment alph.

   Print a new line.
3. End
## 7, Stars in Rectangular Form
### pseudo code
1. Print message: "You need to see stars patterns in rectangular form."

2. Loop from i = 1 to i <= 8:
   
   Loop from j = 1 to j <= 8:
      
      If i == 1 or i == 8:
          
          Print '*'.
      
      Else if j == 1 or j == 8:
          
          Print '*'.
      
      Else:
        
        Print a space.

    Print a new line.
3. End
## 8, Stars in Inverted Half Pyramid Form
### pseudo code
1. Print message: "You need to see stars patterns in inverted half pyramid form."
   
2. Loop from i = 6 to i >= 1:
   
   Loop from j = 1 to j <= i:
       
       Print '*'.

   Print a new line.
3. End
## 9, Stars in Hollow Inverted Half Pyramid Form
### pseudo code
1. Print message: "You need to see stars patterns in hollow inverted half pyramid form."
   
2. Loop from i = 6 to i >= 1:
   
   Loop from j = 1 to j <= i:
     
     If i == 6 or i == 1:
        
        Print '*'.
     
     Else if j == 1 or j == i:
        
        Print '*'.
     
     Else:
     
       Print a space.
    
    Print a new line.
3. End
## 10, Stars in Full Pyramid Form
### pseudo code
1. Print message: "You need to see stars patterns in full pyramid form."
   
2. Loop from i = 1 to i <= 6:
   
   Loop from j = 6 - i to j >= 1:
      
       Print a space.
   
   Loop from k = 1 to k <= i:
       
       Print '* '.
   Print a new line.
3. End
## 11, Stars in Inverted Full Pyramid Form
### pseudo code
1. Print message: "You need to see stars patterns in inverted full pyramid form."
   
2. Loop from i = 6 to i >= 1:
   
   Loop from j = 6 - i to j >= 1:
      
       Print a space.
   
   Loop from k = 1 to k <= i:
       
       Print '* '.
   Print a new line.
3. End
## 12, Stars in Hollow Full Pyramid Form
### pseudo code
1. Print message: "You need to see stars patterns in hollow full pyramid form."
   
2. Loop from i = 1 to i <= 6:
   
   Loop from j = 6 - i to j > 0:
      
      Print a space.
   
   Loop from k = 1 to k <= i:
     
     If i == 1 or i == 6:
        
        Print '* '.

     Else if k == 1 or k == i:
        
        Print '* '.
     
     Else:
        
        Print two spaces.
     Print a new line.
3. End
