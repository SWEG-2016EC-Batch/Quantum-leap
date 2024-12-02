# Problem Analysis
+ **Input** - file size
+ **Output** - transmission time
+ **Operation** -\
          - read the input, file size\
          - calculate the transmission time\
          - convert the transmission time into days, hours and minutes\
          - display the transmission time
# Algorithm Design
## Pseudocode
+ *step 1*: start
+ *step 2*: read the input, file size\
          2.1. if file size < 0, go to step 2 and ask again\
          2.2. if file size > 0, go to step 3
+ *step 3*: convert the file size in mb into file size in bytes as,
  ```
  file_size*=1048576
  ```
+ *step 4*: calculate transmission time as,
  ```
  time = file_size/transmission_speed(960bytes/second)
  ```
+ *step 5*: convert time(s) in to hours,days and minutes :\
        5.1: `days= time/86400`\
        5.2: `hours= time/3600`\
        5.3 `minutes= time/60`
+ *step 6*: print days,hours,minutes and time
+ *step 7*: ask the user if they want to calculate again\
         7.1. if the answer is yes, go to step 2\
         7.2 id the answer is no, go to step 8
+ *step 8*: stop
## Flowchart

```mermaid
graph TD;
    A([start]) --> B[/Read file_size/];
    B -->C[file_size*=1048576];
    C --> D{file_size<0};
    D --> |False| E[time=file_size/transmission_speed];
    D --> |True| B[/Read file_size/]; ;
    E--> F[days=time/86400
          hours=time/3600
          minutes=time/60];
    F --> G{the user wants to calculate again};
    G --> |True| B[/Read file_size/];
    G --> |False| H[/Print: time, days, hours, minutes/];
    H --> I([End]);
    











