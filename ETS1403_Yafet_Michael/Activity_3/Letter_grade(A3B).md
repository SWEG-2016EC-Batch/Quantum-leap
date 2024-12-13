**Steps**: 

1. **Start Program**
2. **Declare Variables**: `quiz`, `mark`, `assignment`, `test`, `project`, `final`
3. **Reading validate inputs**:
   - Ask again if it is invalid:
     - Prompt the user for `test` score (max 15).
     - If invalid, display an error and re-prompt.
   - Ask again if it is invalid:
     - Prompt the user for `quiz` score (max 5).
     - If invalid, display an error and re-prompt.
   - Ask again if it is invalid:
     - Prompt the user for `assignment` score (max 10).
     - If invalid, display an error and re-prompt.
   - Ask again if it is invalid:
     - Prompt the user for `project` score (max 20).
     - If invalid, display an error and re-prompt.
   - Ask again if it is invalid:
     - Prompt the user for `final` score (max 50).
     - If invalid, display an error and re-prompt.
4. **Calculate Total Mark**:
   - `mark = test + quiz + assignment + project + final`
5. **Determine Letter Grade Based on Scale**:
   - `90-100`: Grade is `A`.
   - `80-89`: Grade is `B`.
   - `70-79`: Grade is `C`.
   - `60-69`: Grade is `D`.
   - Below `60`: Grade is `F`.
6. **Display Results**:
   - Print total mark.
   - Print corresponding letter grade.
7. **End **
