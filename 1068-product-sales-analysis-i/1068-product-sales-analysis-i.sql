# Write your MySQL query statement below
select product_name,year,price from sales as s natural join product as p where p.product_id;