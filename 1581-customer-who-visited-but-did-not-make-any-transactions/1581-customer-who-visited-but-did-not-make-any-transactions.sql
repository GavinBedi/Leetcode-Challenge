# Write your MySQL query statement below
# Write your MySQL query statement below
select customer_id,count(*) as count_no_trans from Visits as t1 left outer join Transactions as t2 on t1.visit_id=t2.visit_id where transaction_id is NULL group by customer_id