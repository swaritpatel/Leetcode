# select max(salary) as secondhighestsalary
# from employee 
# where salary <> (select max(salary) from employee )

# select max(salary) as secondhighestsalary
# from employee
# where salary <> (select max(salary) from employee);


# select t1.salary as SecondHighestSalary from Employee as t1 where 1= (select (count(distinct(salary))) from Employee as t2 where t1.salary>t2.salary)/

select max(salary) as SecondHighestSalary
FROM employee where salary <> (Select max(salary) from employee)
