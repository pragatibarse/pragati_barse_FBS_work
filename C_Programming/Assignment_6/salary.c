float calculateSalary(float basic) {
    float da, ta, hra;
    if(basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }
    return basic + da + ta + hra;
}

int main() {
    float basic = 6000;
    float total = calculateSalary(basic);
    printf("Total salary: %.2f\n", total);
    return 0;
}