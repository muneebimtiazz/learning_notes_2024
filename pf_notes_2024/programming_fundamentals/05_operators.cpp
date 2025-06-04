/*
Arithmetic Operators:
+ (Addition): Adds two values.
- (Subtraction): Subtracts the right operand from the left operand.
* (Multiplication): Multiplies two values.
/ (Division): Divides the left operand by the right operand.
% (Modulus): Returns the remainder of the division of the left operand by the right operand.

Comparison Operators:
== (Equal to): Checks if two values are equal.
!= (Not equal to): Checks if two values are not equal.
< (Less than): Checks if the left operand is less than the right operand.
> (Greater than): Checks if the left operand is greater than the right operand.
<= (Less than or equal to): Checks if the left operand is less than or equal to the right operand.
>= (Greater than or equal to): Checks if the left operand is greater than or equal to the right operand.

Logical Operators:
&& (Logical AND): Returns true if both conditions are true.
|| (Logical OR): Returns true if at least one condition is true.
! (Logical NOT): Reverses the logical state of a condition.

Assignment Operators:
= (Assignment): Assigns a value to a variable.
+= (Add and Assign): Adds the right operand to the left operand and assigns the result to the left operand.
-= (Subtract and Assign): Subtracts the right operand from the left operand and assigns the result to the left operand.
*= (Multiply and Assign): Multiplies the left operand by the right operand and assigns the result to the left operand.
/= (Divide and Assign): Divides the left operand by the right operand and assigns the result to the left operand.
%= (Modulus and Assign): Calculates the modulus of the left operand with the right operand and assigns the result to the left operand.

Increment and Decrement Operators:
++ (Increment): Increases the value of a variable by 1.
-- (Decrement): Decreases the value of a variable by 1.

Bitwise Operators:
& (Bitwise AND): Performs a bitwise AND operation.
| (Bitwise OR): Performs a bitwise OR operation.
^ (Bitwise XOR): Performs a bitwise XOR (exclusive OR) operation.
~ (Bitwise NOT): Inverts the bits of a number.
<< (Left Shift): Shifts the bits of a number to the left.
>> (Right Shift): Shifts the bits of a number to the right.

Conditional (Ternary) Operator:
? : (Conditional Operator): A shorthand way of writing an if-else statement.
Other Operators:
, (Comma Operator): Separates expressions, and it evaluates them from left to right.
*/

//  Conditional (Ternary) Operator
#include<iostream>
using namespace std;
int main(){
    // example#1
    int x=5;
    int y=11;
            // condition?expression_if_true:expression_if_false;
    int max=(x>y)?x:y;  //max will be assigned the value of y because the condition is false
    cout<<max;

    // example#2
    int num;
    cout<<"enter a interger:";
    cin>>num;
    string result=(num%2==0)?"even":"odd";
    cout<<result;
    return 0;
}