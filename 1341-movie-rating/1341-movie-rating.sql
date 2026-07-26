# Write your MySQL query statement below
(select name as results from Users where user_id in

(select user_id from (select user_id,count(*) as ct from MovieRating
group by user_id)t2
where ct IN
(select max(ct) from
(select user_id,count(*) as ct from MovieRating
group by user_id) t1))
ORDER BY name
LIMIT 1
)
UNION ALL
(
SELECT title AS results
FROM Movies
WHERE movie_id IN
(
    SELECT movie_id
    FROM
    (
        SELECT movie_id, AVG(rating) AS avg_rating
        FROM MovieRating
        WHERE created_at BETWEEN '2020-02-01' AND '2020-02-29'
        GROUP BY movie_id
    ) t1
    WHERE avg_rating =
    (
        SELECT MAX(avg_rating)
        FROM
        (
            SELECT AVG(rating) AS avg_rating
            FROM MovieRating
            WHERE created_at BETWEEN '2020-02-01' AND '2020-02-29'
            GROUP BY movie_id
        ) t2
    )
)
ORDER BY title
LIMIT 1
);