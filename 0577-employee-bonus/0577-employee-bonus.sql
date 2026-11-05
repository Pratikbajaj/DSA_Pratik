# Write your MySQL query statement below
select name,bonus from employee left outer join Bonus on employee.empid=bonus.empid where bonus<1000 or bonus is null;