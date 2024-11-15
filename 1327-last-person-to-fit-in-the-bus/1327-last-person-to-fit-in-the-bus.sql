# Write your MySQL query statement below
select p1.person_name
from Queue p1 inner join Queue p2
on p1.turn>=p2.turn
group by p1.turn 
having sum(p2.weight) <=1000
order by sum(p2.weight) desc
limit 1;
