# Write your MySQL query statement below
select t1.user_id,Round(IFNULL(AVG(action='confirmed'),0),2) as confirmation_rate from Signups as t1 
left join Confirmations as t2
on t1.user_id=t2.user_id 
group by t1.user_id
