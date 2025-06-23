select f1.user_id,count(*)/(select distinct count(*) from Followers where user_id = f1.user_id) as followers_count
from Followers f1 join Followers f2
where f1.user_id = f2.user_id
group by f1.user_id
order by f1.user_id;