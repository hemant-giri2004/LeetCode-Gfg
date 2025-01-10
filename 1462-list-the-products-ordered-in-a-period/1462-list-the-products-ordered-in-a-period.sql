# Write your MySQL query statement below
select 
    p.product_name,
    sum(unit) as unit
from Products p 
inner join Orders o
on p.product_id = o.product_id
where year(order_date)=2020 and month(order_date)=02
group by product_name
having unit>=100