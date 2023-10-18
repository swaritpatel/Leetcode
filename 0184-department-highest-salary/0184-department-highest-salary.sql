WITH cte AS (
    SELECT d.name AS department,
           e.name AS employee,
           e.salary,
           max(e.salary) OVER (PARTITION BY d.id) AS max_salary
      FROM Employee e
          JOIN Department d
              ON e.departmentId = d.id
)
SELECT department,
       employee,
       salary
  FROM cte
 WHERE salary = max_salary;
