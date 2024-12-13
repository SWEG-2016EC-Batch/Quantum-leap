**Program Purpose**: Calculate the final grade based on various assessments and output the corresponding letter grade.

1. **Start Program**
2. **Initialize Variables**: `test`, `quiz`, `assignment`, `project`, `final`, `mark`
3. **Display Greeting**: Print a message indicating the purpose of the program.
4. **Input Validation and Assessment Entry**:
   - Repeat until valid:
     - Prompt the user for `test` score (out of 15).
     - If invalid, display an error and re-prompt.
   - Repeat until valid:
     - Prompt the user for `quiz` score (out of 5).
     - If invalid, display an error and re-prompt.
   - Repeat until valid:
     - Prompt the user for `assignment` score (out of 10).
     - If invalid, display an error and re-prompt.
   - Repeat until valid:
     - Prompt the user for `project` score (out of 20).
     - If invalid, display an error and re-prompt.
   - Repeat until valid:
     - Prompt the user for `final` score (out of 50).
     - If invalid, display an error and re-prompt.
5. **Calculate Total Mark**:
   - `mark = test + quiz + assignment + project + final`
6. **Determine Letter Grade Based on Scale**:
   - `90-100`: Grade is `A`.
   - `80-89`: Grade is `B`.
   - `70-79`: Grade is `C`.
   - `60-69`: Grade is `D`.
   - Below `60`: Grade is `F`.
7. **Display Results**:
   - Print total mark.
   - Print corresponding letter grade.
8. **End Program**