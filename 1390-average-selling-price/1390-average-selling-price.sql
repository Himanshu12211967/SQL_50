# Write your MySQL query statement below
select Prices.product_id as product_id,
ROUND(
        IFNULL(SUM(Prices.price * UnitsSold.units) / SUM(UnitsSold.units), 0), 
        2
    ) AS average_price
from Prices left join UnitsSold
on Prices.product_id = UnitsSold.product_id
where UnitsSold.purchase_date between Prices.start_date and Prices.end_date
group by Prices.product_id;