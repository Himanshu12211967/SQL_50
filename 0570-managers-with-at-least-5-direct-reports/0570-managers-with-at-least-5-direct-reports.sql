# Write your MySQL query statement below
select e1.name as name
from Employee e1 inner join Employee e2
where e1.id != e2.id and e1.id = e2.managerId
group by e1.id
having count(*) >= 5;