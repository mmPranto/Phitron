USE dummydb;

SELECT *
FROM employees;

SELECT *
FROM employees
WHERE salary>10000
UNION
SELECT *
FROM employees
WHERE department_id = 100;


SELECT *
FROM employees
WHERE salary>10000
UNION ALL
SELECT *
FROM employees
WHERE department_id = 100;


SELECT *
FROM employees
WHERE salary>10000
INTERSECT
SELECT *
FROM employees
WHERE department_id = 100;


SELECT *
FROM employees
WHERE salary>10000
MINUS
SELECT *
FROM employees
WHERE department_id = 100;











