# Write your MySQL query statement below
select Customer.customer_id as customer_id
from Customer left join Product
on Customer.product_key = Product.product_key
group by Customer.customer_id
having count(distinct Customer.product_key) = (select distinct count(*) from Product);
