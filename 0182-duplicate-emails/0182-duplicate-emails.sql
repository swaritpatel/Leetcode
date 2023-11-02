# # Write your MySQL query statement below
# select email from Person 
# group by email 
# having count(email) > 1;



# SELECT email from Person
# group by email
# having count(email) > 1;

# # 2.
# SELECT DISTINCT(p1.email) from Person p1, Person p2
# where p1.id <> p2.id AND p1.email = p2.email;

# #3. 
# SELECT DISTINCT(p1.email) from 
# Person p1 JOIN Person p2 ON
# p1.email = p2.email AND p1.id <> p2.id;


# SELECT email from Person group by email having count(email) >1;


# SELECT distinct(p1.Email) from Person p1, Person p2 where p1.id <> p2.id and p1.email = p2.email;

SELECT distinct(p1.email) from person p1 JOIN person p2
ON p1.email = p2.email and  p1.id <> p2.id ;