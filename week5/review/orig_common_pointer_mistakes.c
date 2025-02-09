int main() {
    int c, *pc;

    pc = c;

    *pc = &c;

    pc = &c;

    *pc = c;
    return 0;
}
