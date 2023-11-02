# SELECT DEPT.name AS Department, EMP.name AS Employee, EMP.salary 

# AS Salary FROM Department DEPT JOIN Employee EMP ON 

# EMP.DepartmentId=DEPT.id WHERE 3 > (SELECT COUNT(DISTINCT EMP1.salary)
 
# FROM Employee EMP1 WHERE EMP1.salary > EMP.salary AND 

# EMP.departmentId = EMP1.departmentId)


















SELECT d.name as Department, e.name as Employee , e.salary as Salary FROM Department d JOIN Employee e
ON e.DepartmentId = d.id WHERE 3 > (SELECT COUNT(Distinct e1.salary) FROM Employee e1 WHERE e1.salary > e.salary and e1.departmentId = e.departmentId)


