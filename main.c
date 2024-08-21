#include <stdio.h>
#include "Battery_main.h"
#include "test_Battery.h"

int main() 
{
    // Test cases
    printf("Testing in English:\n");
    test_Battery(25, 70, 0.7, ENGLISH);
    test_Battery(50, 85, 0, ENGLISH);
    test_Battery(22, 76, 0.78, ENGLISH);
    test_Battery(3, 21, 0.05, ENGLISH);
    
    printf("\nTesting in German:\n");
    test_Battery(25, 70, 0.7, GERMAN);
    test_Battery(50, 85, 0, GERMAN);
    test_Battery(22, 76, 0.78, GERMAN);
    test_Battery(3, 21, 0.05, GERMAN);
    
    return 0;
}
