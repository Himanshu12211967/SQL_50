# Write your MySQL query statement below
select Teacher.teacher_id, count(distinct subject_id) as cnt
from Teacher group by Teacher.teacher_id;