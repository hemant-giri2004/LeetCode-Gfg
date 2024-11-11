# Write your MySQL query statement below
-- select num
-- from MyNumbers
-- group by num
-- having count(num)=1
-- order by num desc
-- limit 1; 
select max(num) as num
from MyNumbers
where num in(select num 
from MyNumbers
group by num
having count(*)=1);