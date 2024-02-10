Bertram Labs Coding Challenge
- Language: C++
- Interface: CLI
- Author: Davis Mann

Compile Instructions:
- Type into command line: g++ -std=c++17 main.cpp

Run Program:
- Type into command line: ./a.out 

General Function:
- Employees who have a higher priced coffee order, have a higher chance of paying for the entire group. This is because the employee with the expensive drink makes up most of the total cost.

Algorithm In-Depth Explain:
- Print out the vector containing the prices of each employees coffee order. The employees are labeled W#.
- The vector of prices gets organized from greatest to least.
- Next, I randomly generate a number out of 100.
- I subtract 100 from each percentage of price of each drink. I use this new number to weigh the chances of each person getting picked.
- Finally, I compensate for there being people who have the same priced drink by placing them into a seperate vector and randomly choosing one of them.

Extras:
- If you would like to change the cost of each employees drinks, please navigate to the main.cpp file and edit the price values within the EmployeeInfo class.
