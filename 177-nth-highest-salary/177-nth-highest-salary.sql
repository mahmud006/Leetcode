CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N = N-1;
  RETURN (
      # Write your MySQL query statement below.
      Select DISTINCT(salary) from Employee 
      Order By salary DESC LIMIT 1 OFFSET N
  );
END