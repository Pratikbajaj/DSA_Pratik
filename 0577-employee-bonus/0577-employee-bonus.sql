# Write your MySQL query statement below
select name,bonus from employee left outer join Bonus on employee.empid=bonus.empid where bonus<1000 or bonus is null;
-- SELECT e.name, b.bonus
-- FROM Employee e
-- LEFT JOIN Bonus b
-- ON e.empId = b.empId
-- WHERE b.bonus < 1000 OR b.bonus IS NULL;