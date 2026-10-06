# Write your MySQL query statement below
SELECT V.customer_id,count(V.visit_id) as count_no_trans
from Visits V left join Transactions T on V.visit_id=T.visit_id
where T.amount is null 
group by V.customer_id;

-- SELECT V.customer_id ,count(V.visit_id) as count_no_trans
-- FROM Visits V left join Transactions T on V.visit_id = T.visit_id
-- WHERE T.amount is null
-- GROUP BY V.customer_id;