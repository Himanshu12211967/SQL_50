# Write your MySQL query statement below
(select Users.name as results
from Users left join MovieRating
on Users.user_id = MovieRating.user_id
group by MovieRating.user_id
order by count(*) desc,Users.name
limit 1)

union all

(select Movies.title from
Movies left join MovieRating
on Movies.movie_id = MovieRating.movie_id
where month(MovieRating.created_at) = '02' and year(MovieRating.created_at) = '2020'
group by MovieRating.movie_id
order by avg(rating) desc,Movies.title
limit 1)