# Write your MySQL query statement below
Select IF (COUNT(Salary) > 0, Salary, NULL) as SecondHighestSalary from (Select distinct salary from Employee Order By salary desc limit 1, 1) as SecondHighestSalary