# # Write your MySQL query statement below
# SELECT d.name as Customers from Customers d
# MINUS
# SELECT c.name  FROM Customers c 
# JOIN Orders o ON c.id = o.customerId;

SELECT d.name as Customers
FROM Customers d
LEFT JOIN Orders o ON d.id = o.customerId
WHERE o.customerId IS NULL;