# Write your MySQL query statement below
select distinct a.num as ConsecutiveNums
from Logs a join Logs b join Logs c
where (a.num = b.num and a.num = c.num) and (a.id+1 = b.id and b.id+1 = c.id);