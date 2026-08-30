/* SA_RESETHAND : This flag is used to reset the signal handler to its default action after the signal is delivered. 
It is useful when you want the signal to be handled only once and then revert to the default behavior. */
// Signals SIGKILL & SIGSTOP cannot be caught, blocked, or ignored. Hence, they cannot be handlet through a userdefined ISR. If you try to do so, then the sigaction() function will return -1 and set errno to EINVAL.
#include "header.h"
int main(){

}