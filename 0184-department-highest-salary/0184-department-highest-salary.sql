SELECT d.name as Department, e.name as Employee, e.salary as Salary 
FROM Department d, Employee e 
where d.id  = e.departmentId and (e.departmentId, e.salary) in 
(Select departmentId, max(salary) from employee group by departmentId);

