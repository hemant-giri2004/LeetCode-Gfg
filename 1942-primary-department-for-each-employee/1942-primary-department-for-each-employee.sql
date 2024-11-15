# Write your MySQL query statement below
select distinct employee_id,department_id
from Employee
where Employee_id in (select employee_id 
from Employee
group by Employee_id
having count(*)=1)
or primary_flag='Y';