# Problem Analysis
**Input**  -  &nbsp;&nbsp;  fileSize , choice\
**Output** - days , hours , minutes , seconds\
**Operation**
-check the While condition if true:
- declare integer variable fileSize,transmitionTimeInSeconds,days,hours,minutes,seconds,tempFileSIze,choice.
-  Read file size as fileSize
- Validate the input to ensure it is a non-negative number.
    If the input is invalid, read fileSize again.
- Convert file size from MB to Bytes.
    1MB= 104876bytes. note that 1 character is 8 bit = 1byte.
-   Calculate the transmission time in seconds (using a constant speed of 960 bytes/sec).
```
 transmitionTimeInSeconds = fileSize / 960 
```
- Convert the transmission time from seconds to days, hours, minutes, and seconds. using :
```
                 days = transmitionTimeInSeconds / 86400 
                 hours = (transmitionTimeInSeconds % 86400)/3600
                 minutes = (transmitionTimeInSeconds % 3600) /60 
                 seconds = (transmitionTimeInSeconds % 3600) %60
```
- Display days ,hours , minutes ,seconds. 
# Pseudocode
- **step 1**: start
- **step 2**: check the while loop if:\
   2.1 true then go to step 3\
   2.2 false then go to step 11
- **step 3**: Read fileSize
- **step 4**: check if fileSize >=0\
           4.1 then go to step 5\
           4.2 else go to step 3
- **step 5**: convert MB to bytes 1MB= 104876bytes.
- **step 6**: calculate transmissionTimeInSeconds as:
 
 ```
 transmissionTimeInSeconds = fileSize / 960 
 ```  
- **step 7**: Convert Time to Days, Hours, Minutes, and Seconds: 
```
 days = transmitionTimeInSeconds / 86400 
 hours = (transmitionTimeInSeconds % 86400)/3600
 minutes = (transmitionTimeInSeconds % 3600) /60 
seconds = (transmitionTimeInSeconds % 3600) %60
```


- **step 8**: print days , hours , minutes , seconds.
- **step 9**: Read choice
- **step 10**: check if choice is 1 or 0 or invalid input\
     step 10.1 if 1 then go to step 3\
     step 10.2 else if  0 then go to step 11\
     step 10.3 else invalid input go to step 9\
**step 11** End
# Flow Chart

```mermaid
flowchart TD
    A([start])--> q{check while true}
    q-->B[/Read fileSize/]
    B --> C{check if fileSize >=0}
    C -->|False| B
    C -->|True| D[Convert MB to Bytes]
    D --> E[Calculate transmissionTimeInSeconds]
    E --> F[Convert Time to Days, Hours, Minutes, and Seconds]
    F --> G[/Display days, hours, minutes, and seconds/]
    G --> H[/Read choice/]
    H --> I{check if choice == 1 or 0 or invalid input}
    I -->|1| B
    I -->|0| J([End])
    I -->|Invalid Input| H
