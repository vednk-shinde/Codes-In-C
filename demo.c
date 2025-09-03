/*write a menu driven program to perform the following progrm on:
 array print,read,write,addition ,comparision ,search and elemet given in array
 [if possible also print the location of it]*/
 #include <stdio.h>

 int main() {
     int arr[50], n = 0, choice, i, sum, min, search, found = 0;
 
     do {
         printf("\n--- Menu ---\n");
         printf("1. Read Array\n");
         printf("2. Print Array\n");
         printf("3. Sum of Elements\n");
         printf("4. Find Minimum\n");
         printf("5. Search Element\n");
         printf("6. Exit\n");
         printf("Enter your choice: ");
         scanf("%d", &choice);
 
         switch (choice) {
             case 1:
                 printf("Enter number of elements: ");
                 scanf("%d", &n);
                 printf("Enter %d elements:\n", n);
                 for (i = 0; i < n; i++) {
                     scanf("%d", &arr[i]);
                 }
                 break;
 
             case 2:
                 printf("Array elements: ");
                 for (i = 0; i < n; i++) {
                     printf("%d ", arr[i]);
                 }
                 printf("\n");
                 break;
 
             case 3:
                 sum = 0;
                 for (i = 0; i < n; i++) {
                     sum += arr[i];
                 }
                 printf("Sum = %d\n", sum);
                 break;
 
             case 4:
                 min = arr[0];
                 for (i = 1; i < n; i++) {
                     if (arr[i] < min)
                         min = arr[i];
                 }
                 printf("Minimum = %d\n", min);
                 break;
 
             case 5:
                 printf("Enter element to search: ");
                 scanf("%d", &search);
                 found = 0;
                 for (i = 0; i < n; i++) {
                     if (arr[i] == search) {
                         printf("Element found at position %d (index %d)\n", i + 1, i);
                         found = 1;
                         break;
                     }
                 }
                 if (!found) {
                     printf("Element not found.\n");
                 }
                 break;
 
             case 6:
                 printf("Exiting...\n");
                 break;
 
             default:
                 printf("Invalid choice.\n");
         }
 
     } while (choice != 6);
 
     return 0;
 }