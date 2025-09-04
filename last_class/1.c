#include <stdio.h>

struct details {
    char str[10];
    int roll_no;
    float marks;
};
void update_marks(struct details *x){
    int i;
    printf("Enter the new marks: ");
    scanf("%d", &i);
    x->marks = i;
}
int main() {
    struct details s1 = {"sai", 89, 77.4};
    printf("name: %s roll_no %d marks %.2f \n", s1.str, s1.roll_no, s1.marks);
    update_marks(&s1);
    printf("Updated details - name: %s roll_no %d marks %.2f \n", s1.str, s1.roll_no, s1.marks);
    s1.marks = 200;
    printf("Updated details - name: %s roll_no %d marks %.2f \n", s1.str, s1.roll_no, s1.marks);
    return 0;
}

