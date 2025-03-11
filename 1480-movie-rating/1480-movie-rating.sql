# Write your MySQL query statement below
(Select name as results
FROM Users
INNER JOIN MovieRating USING(user_id)
group by user_id 
order by count(rating) desc, name 
limit 1
)
union all
(select title as results
 from Movies 
 inner join MovieRating Using(movie_id)
 where month(created_at) ='02' and year(created_at) ='2020'
 group by title 
 order by avg(rating) desc , title
 limit 1
 )
