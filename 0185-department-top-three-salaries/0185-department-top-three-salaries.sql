# Write your MySQL query statement below

select d.name as Department, e.name as Employee, e.salary as Salary
from Employee e
inner join department d
on e.departmentId=d.id
WHERE 3>(
    SELECT count(distinct e2.salary)
    FROM Employee e2 
    WHERE e2.salary > e.salary
    and e2.departmentId = e.departmentId 
);