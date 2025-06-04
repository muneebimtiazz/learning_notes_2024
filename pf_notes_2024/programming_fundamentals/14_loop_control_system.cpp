#include<iostream>
using namespace std;
int main(){
// break->break out of loop entirely.Any outer loops (if present) would not be affected by the break in the inner loop..
// continue->skip an iteration of a loop
// pass--->does nothing,act as a placeholder
/*The loop body, which consists of braces delimiting several statements, 
is called a block ofcode. One important aspect of a block is that a variable 
defined inside the block is not visible outside it*/

    for(int i=0;i<20;i++){
        if(i==6){
            break; // This will break out of the for loop
//            continue; // Skips the rest of the loop body for the current iteration
            }
        cout<<i<<endl;
    }

    // The program continues here after the for loop
    cout<<"teminated from for loop";
    return 0;
}

// break and continue are primarily associated with loops, and their usage in if-else and switch statements is not typical.

/* The return statement is indeed specific to functions and it causes the immediate exit from the function, regardless of whether it is within a loop, an if-else block, or any other part of the function. If the compiler encounters a return statement, the function is exited, and the control flow returns to the calling code.
On the other hand, the break statement is used to exit from loops. When a break statement is encountered inside a loop, it terminates the loop and the control flow moves to the statement following the loop. It does not exit the entire function, just the loop in which it is located.
*/