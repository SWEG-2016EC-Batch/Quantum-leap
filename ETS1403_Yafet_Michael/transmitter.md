# Algorithm and Flowchart for C++ Code

## Algorithm

1. **Start**: Begin the program execution.
2. **Input unit type**: Prompt the user to select a unit type for file size (TeraBytes, GigaBytes, MegaBytes, KiloBytes, or Bytes).
3. **Input file size**: Prompt the user to enter the size of the file in the chosen unit.
4. **Unit conversion**:
   - Use a `switch` statement to assign the appropriate conversion multiplier based on the unit type.
   - If the unit type is invalid, display an error message and terminate the program.
5. **Calculate total transfer time**:
   - Convert the file size into bytes using the multiplier.
   - Divide the total bytes by 960 (bytes per second) to calculate the time in seconds.
6. **Break down time**:
   - Convert the total time (in seconds) into years, months, weeks, days, hours, minutes, and remaining seconds.
7. **Output result**:
   - Display the total transfer time in terms of years, months, weeks, days, hours, minutes, and seconds.
8. **End**: Terminate the program.

---

## Flowchart
