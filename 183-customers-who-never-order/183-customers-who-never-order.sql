# Write your MySQL query statement below
Select name AS Customers from Customers left join Orders on Customers.id = Orders.customerId where Orders.customerId IS null