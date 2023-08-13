# Write your MySQL query statement below
# SELECT e1.name from Employee e1
# JOIN Employee e2 ON e1.managerId > e2.id
# WHERE e1.salary > e2.salary;

SELECT e1.name as Employee
FROM Employee e1
JOIN Employee e2 ON e1.managerId = e2.id
WHERE e1.salary > e2.salary;

# SELECT e1.name  as Employeefrom Employee e1 , Employee e2 
# WHERE e1.managerId = e2.id and e1.salary > e2.salary;