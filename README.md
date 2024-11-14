#Garland (Mala) Billing Program
This is a C++ program that allows users to select and order flower garlands of various types and sizes. Each type of garland has three sizes—small, medium, and large—with predefined prices. At the end of the order, the program generates an invoice with the total cost, a 20% discount, and the final price after the discount.

Features
Selection of Garland Types: Users can choose from ten types of garlands, including Marigold, Champaka, Lotus, Lily, Ashoka, Oleander, Chrysanthemum, Rose, Hibiscus, and Mixed.

Sizes: Each garland type is available in three sizes:

Small (S) - 100 Rs per garland
Medium (M) - 200 Rs per garland
Large (L) - 400 Rs per garland
Order Quantities: Users can specify the quantity for each size, and the program calculates the total cost per size.

Invoice Generation: After the user completes the selection, an invoice is generated that includes:

Total cost per size
Overall total cost
20% discount on the total cost
Final price after the discount
Program Structure
The program is organized within a class called Garland. Here’s a breakdown of its components:

Class: Garland
Attributes:
choice, choice1, choice2: User choices for garland type.
size: Size of the garland (small, medium, large).
small, medium, large: Quantities of each garland size.
STotal, MTotal, LTotal: Total price for each garland size.
Total: Sum of STotal, MTotal, and LTotal.
dis: Final discounted price.
Methods:
void code(): The main function that displays garland types, handles user input for selections, and computes totals.
Main Function
The main() function creates an instance of the Garland class, invokes code(), and then displays the invoice with details.

How to Run the Program
Compile: Use a C++ compiler to compile the program.

bash
Copy code
g++ -o Garland Garland.cpp
Run: Execute the compiled file.

bash
Copy code
./Garland
Follow Prompts: Choose a garland type, size, and quantity as prompted. Continue selecting items until you’re done.

View Invoice: After finalizing the order, the program will display the total amount with a discount applied.

Example Usage
plaintext
Copy code
CHOOSE THE TYPE OF GARLAND:
1]MARIGOLD🌻           2]CHAMPAKA🌸        3]LOTUS🌷
...
Choice: 1

ENTER SIZE(S, M, L):
1)SMALL(S)        2)MEDIUM(M)        3)LARGE(L)
Size: 1
Quantity: 5

DO YOU WANT TO SELECT ANY OTHER CHOICE(Y/N)? Y
...
Future Improvements
Adding validation for user inputs to handle invalid choices gracefully.
Enhancing the interface with more detailed information about each flower type.
Allowing for customization of garland prices and sizes.
