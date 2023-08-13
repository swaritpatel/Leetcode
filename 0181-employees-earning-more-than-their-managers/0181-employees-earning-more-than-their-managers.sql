# Write your MySQL query statement below
# SELECT e1.name from Employee e1
# JOIN Employee e2 ON e1.managerId > e2.id
# WHERE e1.salary > e2.salary;

# SELECT e1.name
# FROM Employee e1
# JOIN Employee e2 ON e1.managerId = e2.id
# WHERE e1.salary > e2.salary;

#  SELECT EMP.name AS Employee FROM Employee EMP,Employee MGR
# WHERE EMP.managerId=MGR.id AND EMP.salary>MGR.salary

SELECT e1.name  as Employee from Employee e1 , Employee e2 
WHERE e1.managerId = e2.id and e1.salary > e2.salary;