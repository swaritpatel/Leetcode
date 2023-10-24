# Write your MySQL query statement below
with cte as(
    select player_id,
    event_date as cur,
    lead(event_date,1) over(PARTITION BY player_id
                            ORDER BY event_date) as 'next',
    FIRST_VALUE(event_date) over(PARTITION BY player_id
                            ORDER BY event_date) as 'fir'
    from Activity
)
select round(count(distinct player_id)
/(select count(distinct player_id) 
from Activity),2) as fraction  
from cte
where cur + interval 1 day=next and
cur=fir;