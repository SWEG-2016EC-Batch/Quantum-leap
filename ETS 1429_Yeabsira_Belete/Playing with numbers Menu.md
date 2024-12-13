# playing with numbers
       Select menu to perform different numbers playing!
## 1,Reverse the given number!
### pseudo code
1. start
   
2. Declare and Initilize:
   
        num,remainder and result.

3. Enter number
   
        If the number is valid perform,

        WHILE num is not 0:
            remainder = num MOD 10
            result = (result * 10) + remainder
            num = num DIV 10

        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop

4. Print the result which is the reverse of a given number.
   
5. Ask the user need to continue or not,
        
        When press y or Y repet the loop, else exit the loop.
6. End

## 2, count digits!
### pseudo code
1. start
   
2. Declare and Initilize:
   
        num,remainder and counter.

3. Enter number
   
        If the number is valid perform,

          WHILE num is not 0:   
            counter++;
            remainder = num % 10;
            num = num DIV 10

        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop
          
4. Print the result.
   
5. Ask the user need to continue or not,
        
        When press y or Y repet the loop, else exit the loop.
6. End

## 3, Find the product of even digits!
### pseudo code
1. start
   
2. Declare and Initilize
   
        num,remainder,product.

3. Enter number
   
        If the number is valid perform,
        
            WHILE num is not 0:              
            remainder = num MOD 10;
                if,remainder MOD 2 == 0
                    product *= remainder;
                   num = num DIV 10

        
        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop
4. Print the product of even digits
   
5. Ask the user need to continue or not,
        
        When press y or Y repet the loop, else exit the loop.
6. End

## 4, First and Last digits!
### pseudo code
1. start
   
2. Declare and Initilize
   
        num,remainder,counter.

3. Enter number
   
        If the number is valid perform,

        WHILE num is not 0:             
            counter++;
            remainder= num % 10;
            num = num DIV 10
                if counter is 1,                   
                  print last digits
                    
                 else if num is 0,
                  print first digits
        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop
4. Ask the user need to continue or not,
        
        When press y or Y repet the loop, else exit the loop.
5. End
## 5, Swap the first and the last digits!
### pseudo code
1. start
   
2. Declare and Initilize
   
       num,first,last,temp,swap,count 
3. Enter number
   
        If the number is valid perform,

        temp = num;
        last = temp MOD 10;
        count = (int)log10(temp);
            while temp greater than or equal to 10
                    temp DIV 10;
        
            first = temp;
            swap = (last*pow(10,count)+first) + (num-(first*pow(10,count)+last));
        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop
4. Print number after swapping

5. Ask the user need to continue or not,
        
        When press y or Y repet the loop, else exit the loop.
6. End
## 6, check number is palindrome or not!
### pseudo code
1. start
   
2. Declare and Initilize

        num,temp,remainder,result.
3. Enter number
   
        If the number is valid perform,

        WHILE num is not 0:
              
                remainder = temp MOD 10;
                result = (result * 10) + remainder;
                temp DIV 10;
              
               if  result = num
                 Prit number is palindrome.
                
                else 
                  Prit number is not palindrome.
        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop
4. Ask the user need to continue or not,
        
        When press y or Y repet the loop, else exit the loop.
5. End
## 7, Frequence of the digits!
### pseudo code
1. start
   
2. Declare and Initilize 
   
       num,temp,count
3. Enter number
   
        If the number is valid perform,

        for  digit is 0 digit <= 9 ++digit 
          temp = num;
          count = 0;
            while temp is 0 
              if temp MOD 10 equal to digit
                ++count;              
              
                temp DIV 10;  
            
            if count greater than 0
              prit digit and count
        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop
4. Ask the user need to continue or not,
        
        When press y or Y repet the loop, else exit the loop.
5. End
## 8, Check whether the number is strong or not!
### pseudo code
1. start

2. Declare and Initilize

        num,temp and sum 
3. Enter number
   
        If the number is valid perform,

        temp = num;
       
          WHILE num is not 0:
           Declare and Initilize 
              remainder and product is 1
                remainder = temp MOD 10;
                   WHILE num is not 0:
                      
                        product *= remainder;
                        remainder -= 1;
                      
                        sum += product;
                        temp DIV 10;
           
             if  sum == num
               
                print number is strong
               
              else 
                 print number is not strong  
        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop
4.  Ask the user need to continue or not,
        
        When press y or Y repet the loop, else exit the loop. 
5. End
## 9, Check the number is perfect or not! 
### pseude code
1. start
   
2. Declare and Initilize
   
        num,result and sum is 0.
3. Enter number
   
        If the number is valid perform,

        for int i is 1; i <= num(evaluate); i++
          
            if  num MOD i is equal to 0
              
                 sum += i;
              
              result = sum - num;
                if  result == num
                  
                  print the number is perfect.
                  
                else
                  
                    print the number is perfect.
        Else

        input is invalid (not a number):
        IGNORE invalid input
        CLEAR input error flag
        PRINT "Please enter numbers only"
        EXIT the loop
4. Ask the user need to continue or not,
        
       When press y or Y repet the loop, else exit the loop.
5. End 
