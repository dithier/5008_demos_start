int main() {
    int c, *pc;

    // pc is adddress but c is not
    pc = c;  // Error

    // &c is address but *pc is not
    *pc = &c;  // Error

    // both &c and pc are addresses
    pc = &c;  // Not an error

    // both c and *pc are values
    *pc = c;  // Not an error
    return 0;
}
