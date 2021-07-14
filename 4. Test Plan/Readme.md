# Test plan
## High Level Test Plan
| ID | Description | Expected input | Expected output |
| --- | --- | --- | --- |
| HLT01 | checks if user has selected number for calculation | 1 to 21 | Depends on user input `(if >21, fails)` |
| HLT 02 | If user gives required arguments | either 1 or 2 depending on function selected | result of the function evaluated |
| HLT03 | checks test cases and executes | one or two arguments | result |

## Low Level Test Plan
| ID | Description | Expected input | Expected output | Test status |
| --- | --- | --- | --- | --- |
| LLT01 | Addition | 2, 3<br /> -5, 4 | 5<br />-1 | `success` |
| LLT02 | Subtraction | 2, 3<br /> 10, 5 | -1<br />5 | `success` |
| LLT03 | Multiplication | 5, 2<br /> -5, 1 | 10<br />-5 | `success` |
| LLT04 | Division | 10, 2<br /> 0, 10 | 5<br />0 | `success` |
| LLT05 | cosec | 90 <br /> 30 | 1<br />2 | `success` |
| LLT06 | GCD | 24, 36 <br /> 98, 56 | 12<br />14 | `success` |
| LLT07 | LCM | 2, 3<br /> 6, 10 | 5<br />30 | `success` |
| LLT08 | power | 2, 3<br /> 2, 10 | 8<br />1024 | `success` |
| LLT09 | Absolute | -6.000<br /> -30.046 | 6.000<br />30.046 | `success` |
| LLT10 | Square root | 36<br /> 900 | 6<br />30 | `success` |
| LLT11 | Cube root | 8<br /> 729 | 2<br />9 | `success` |
