# SELECT _score.score,
#     (
#         SELECT count(DISTINCT (distinct_score.score)) + 1
#         FROM Scores distinct_score
#         WHERE distinct_score.score > _score.score
#         ) 
#         AS 'rank'
        
# FROM Scores _score
# ORDER BY _score.score DESC


select score, dense_rank() over(order by score desc) as 'rank' from Scores;

