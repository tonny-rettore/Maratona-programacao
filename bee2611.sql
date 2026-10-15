SELECT m.id, m.name AS name
FROM movies m
JOIN genres g ON g.id = m.id_genres
WHERE g.description = 'Action';