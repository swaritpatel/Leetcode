# Write your MySQL query statement below
select stock_name,(sum(if(operation='Sell',price,0))-sum(if(operation='Buy',price,0)))
as capital_gain_loss 
from Stocks
group By stock_name;