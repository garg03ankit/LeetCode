# Write your MySQL query statement below
select name from  customer where  referee_id is NULL OR customer.referee_id not in ('2');