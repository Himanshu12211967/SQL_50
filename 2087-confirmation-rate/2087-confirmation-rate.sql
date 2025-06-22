# Write your MySQL query statement below
select Signups.user_id as user_id, round(ifnull(sum(Confirmations.action = 'confirmed'),0)/count(*),2) as confirmation_rate
from Signups left join Confirmations
on Signups.user_id = Confirmations.user_id
group by Signups.user_id;