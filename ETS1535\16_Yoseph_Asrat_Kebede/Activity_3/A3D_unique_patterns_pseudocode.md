# Pseudocode: Pattern Manipulation Program

## Start Program
1. **Initialize Variables**:
   - `option`: Store user's choice for the pattern.
   - `choice`: Determine if the user wants to create a custom-sized pattern.
2. **Display Welcome Message**:
   - Explain the program's purpose.
   - List available pattern options (1–12) and their descriptions.
3. **Input Pattern Choice**:
   - Prompt the user to enter `option` for the desired pattern.
   - Prompt the user to enter `choice` (0 for custom size, any other key for default size).

## Validate Input
4. **Check Validity of `option`**:
   - If `option` is not between 1 and 12, display an error message and re-prompt.

## Pattern Display Based on `option`
5. **Handle Predefined Patterns**:
   - If `choice` is not 0:
     - Use `switch` to handle each case (1–12).
     - For each case:
       - Execute nested loops to print the specific pattern.
       - Use `cout` to print the pattern according to the described logic.
6. **Handle Custom Patterns**:
   - If `choice` is 0:
     - Prompt the user to enter `height` for the pattern.
     - For patterns 1, 2, 6, and 7:
       - Prompt the user to also enter `width`.
     - Use `switch` to handle each case (1–12).
     - Adjust loop boundaries and logic based on user-defined dimensions.

## Individual Pattern Logic
7. **Pattern Logic**:
   - **Case 1**: Print a square of numbers from 1 to 5.
   - **Case 2**: Print alphabet in a 4x6 grid.
   - **Case 3**: Print a left-aligned bottom half pyramid with numbers.
   - **Case 4**: Print a right-aligned bottom half pyramid with numbers.
   - **Case 5**: Print a left-aligned bottom half pyramid with alphabet letters.
   - **Case 6**: Print a 5x5 grid of lowercase letters.
   - **Case 7**: Print a 7x8 hollow square.
   - **Case 8**: Print an inverted left-aligned bottom half triangle.
   - **Case 9**: Print a hollow inverted left-aligned bottom half triangle.
   - **Case 10**: Print a full pyramid.
   - **Case 11**: Print an inverted full pyramid.
   - **Case 12**: Print a hollow full pyramid.

## Repeat or End Program
8. **Prompt for Another Pattern**:
   - Ask the user if they want to repeat.
   - If yes, go to step 3.
   - If no, exit the program.

## End Program
9. **Terminate Execution**:
   - Display a goodbye message.
   - Return 0 to signify successful execution.