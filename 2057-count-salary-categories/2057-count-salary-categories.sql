# Write your MySQL query statement below
(select 'Low Salary' as category,count(*) as accounts_count
from Accounts where income < 20000)

Union all

(select 'Average Salary' as category,count(*) as accounts_count
from Accounts where income >= 20000 and income <= 50000)

Union all

(select 'High Salary' as category,count(*) as accounts_count
from Accounts where income > 50000)