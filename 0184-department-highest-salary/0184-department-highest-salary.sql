SELECT d.name as Department, e.name as Employee, e.salary as Salary 
FROM Department d JOIN Employee e ON
d.id = e.departmentId
and (e.departmentId, e.salary) in 
(Select departmentId, max(salary) from employee group by departmentId);

