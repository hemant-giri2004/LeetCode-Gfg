SELECT DISTINCT num AS ConsecutiveNums
FROM Logs l
WHERE 
    l.num = (SELECT num FROM Logs WHERE id = l.id - 1) AND
    l.num = (SELECT num FROM Logs WHERE id = l.id + 1);
