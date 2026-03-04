int canVote(int age) {
    return (age >= 18) ? 1 : 0;
}

int main() {
    int age = 20;
    if(canVote(age))
        printf("Eligible to vote\n");
    else
        printf("Not eligible\n");
    return 0;
}