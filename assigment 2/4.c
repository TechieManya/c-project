#include <stdio.h> 
int main() { 
int marks[] = {75, 88, 60, 65, 75}; 
int n = 5, count = 0; 
for (int i = 0; i < n; i++) { 
if (marks[i] == 99) { 
printf("99 found at index %d\n", i); 
count++; 
} 
} 
printf("Total students with 99: %d", count); 
return 0; 
}
