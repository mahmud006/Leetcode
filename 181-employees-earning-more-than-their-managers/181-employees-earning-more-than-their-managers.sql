# Write your MySQL query statement below
# Select name AS Employee from Employee AS emp where salary > (Select salary from Employee AS manager where emp.managerId = manager.id)
Select Emp.name AS Employee from Employee AS emp join Employee AS manager on Emp.managerId = manager.id where emp.salary > manager.salary;