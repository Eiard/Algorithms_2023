#include <iostream>

// P18
#include "./18/Test18.h"
// P40
#include "./40/Test40.h"
// P70
#include "./70/Test70.h"
// P85
#include "./85/Test85.h"

int main() {

    printf("Please enter Pages\n");
    printf("---->");
    int Enter;

    scanf("%d", &Enter);

    if (Enter == 18) {
        Test18();
    } else if (Enter == 40) {
        Test40();
    } else if (Enter == 70) {
        Test70();
    }else if (Enter == 85){
        Test85();
    }


    return 0;
}
